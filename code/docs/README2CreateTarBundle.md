# Create a delivery Tar bundle

Comprehensive How-to-create list for a ODL/Karaf bundle that can be used to be installed as "Choice 1" refering to the README.MD.

#### Start configuration

Setup a server
  - ubuntu 16.04
  - odl-karaf boron

Setup OpenDaylight
  - All ODL-Setup steps executed from README.MD Choice 2 Steps #1 - #3.1

During step #2.3 enable logging within karaf command line:

    log:set DEBUG com.highstreet.technologies
    log:set TRACE org.opendaylight.netconf


#### build applications

    mvn clean install -DskipTests

#### some checks

    echo $JAVA_HOME
    echo $JAVA_MAX_MEM
    echo $ODL_KARAF_HOME


#### clean

    rm -rf ~/.m2/repository/com/highstreet/technologies/odl/app/closedLoopAutomation-karaf/
    rm -rf ~/.m2/repository/com/highstreet/technologies/odl/app/spectrum/scheduler-karaf/
    find ~/.m2/repository/org/opendaylight/mwtn/* -type d -name "*-module" -exec rm -rf {} \;
    find ~/.m2/repository/com/hcl/* -type d -name "*-module" -exec rm -rf {} \;
    find ~/.m2/repository/com/highstreet/* -type d -name "*-module" -exec rm -rf {} \;
    rm -rf $ODL_KARAF_HOME/cache/schema/tailf*.yang
    rm -rf $ODL_KARAF_HOME/cache/schema/yuma*.yang

#### remove

    rm $ODL_KARAF_HOME/etc/org.ops4j.pax.web.cfg
    rm -rf $ODL_KARAF_HOME/data/*
    rm -rf $ODL_KARAF_HOME/system/org/opendaylight/mwtn
    rm -rf $ODL_KARAF_HOME/system/com/hcl
    rm -rf $ODL_KARAF_HOME/system/com/highstreet

#### deploy

    mkdir -p $ODL_KARAF_HOME/system/cn
    mkdir -p $ODL_KARAF_HOME/system/cn/com
    cp -R ~/.m2/repository/org/opendaylight/mwtn $ODL_KARAF_HOME/system/org/opendaylight
    cp -R ~/.m2/repository/cn/com/zte $ODL_KARAF_HOME/system/cn/com
    cp -R ~/.m2/repository/com/hcl $ODL_KARAF_HOME/system/com
    cp -R ~/.m2/repository/com/highstreet $ODL_KARAF_HOME/system/com

#### Copy into new directory and create tar file

    TARDIR=onf-wireless-4th-poc-karaf-0.5.1-Boron-SR1-2017-06-22
    mkdir $TARDIR
    cp -r distribution-karaf-0.5.1-Boron-SR1/* $TARDIR
    tar -czvf "$TARDIR.tar.gz" $TARDIR


#### install in karaf console

    cd $ODL_KARAF_HOME
    ./bin/karaf clean

    feature:install odl-netconf-topology
    feature:install odl-netconf-connector-all
    feature:install odl-restconf-all
    feature:install odl-mdsal-apidocs
    feature:install odl-dlux-all
    feature:repo-add mvn:org.opendaylight.mwtn/mwtn-parent/0.4.0-SNAPSHOT/xml/features
    feature:install elasticsearch
    feature:install odl-mwtn-all
    feature:repo-add mvn:com.highstreet.technologies.odl.app/route-features/0.4.0-SNAPSHOT/xml/features
    feature:install odl-route

#### perform tests with DLUX UI

-> if test successfully done deliver already created TAR package
-> Link in Centennial anpassen

#### Appendix
..........................

    # remove all required nes
    # unmount all devices
    # close DLUX UI

    # delete logs in ElasticSearch using delete plug in

    http://localhost:9200/mwtn/log/
    http://localhost:9200/sdnevents/
    http://localhost:9200/sdnperformance/


    # shutdown karaf
    logout


    # clear karaf

    ./bin/karaf clean
    logout
    
    rm -rf $ODL_KARAF_HOME/cache/schema/tailf*.yang
    rm -rf $ODL_KARAF_HOME/cache/schema/yuma*.yang
    rm -rf $ODL_KARAF_HOME/data
    rm $ODL_KARAF_HOME/etc/org.ops4j.pax.web.cfg
    
    # IMPORTANT!!!
    # make sure that no hardcoded references are in karaf

    rm $ODL_KARAF_HOME/etc/org.ops4j.pax.web.cfg

    cd ..

    mv onf-wireless-4th-poc-karaf-0.5.1-Boron-SR1-2017-06-22

    #OLDtar -czf onf-wireless-4th-poc-karaf-0.5.1-Boron-SR1-2017-06-22.tar.gz onf-wireless-4th-poc-karaf-0.5.1-Boron-SR1-2017-06-22
    
#### Build command for complete bundle TEF

    User: herbert Server buildtst
    
    cd ~/SDNProjects-Boron/code
    git pull

    cd ~/tst
    ./build build
    
    cd ~/SDNProjects-Boron/code
    ./install.sh ibb
    
    #test && ... stop
    ./install.sh stop
    
    cd ~
    #Remove some files 
    rm -rf $ODL_KARAF_HOME/cache/schema/tailf*.yang
    rm -rf $ODL_KARAF_HOME/cache/schema/yuma*.yang
    rm -rf $ODL_KARAF_HOME/data
    rm $ODL_KARAF_HOME/etc/org.ops4j.pax.web.cfg

    # !! REPLACE 014 with actual build number
    tar -czf distribution-karaf-0.5.3-Boron-SR3-TST-001.014.tar.gz distribution-karaf-0.5.3-Boron-SR3
    
    # Filezill ~/tst/builds/networkapps.xyz.tar and ~/distribution-karaf-0.5.3-Boron-SR3-TST-001.0xy.tar.gz
