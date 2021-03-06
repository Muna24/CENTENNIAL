define(['angular'], function (angular) {
  'use strict';

  var config = angular.module('config', [])
    .constant('ENV', {

      baseURL: '',
      adSalPort: '8080',
      mdSalPort: '8181',
      mdSalSecuredPort: '8443',
      configEnv: 'ENV_PROD',
      getBaseURL: function (salType) {
        if (salType !== undefined) {
          var urlPrefix = '';
          if (this.configEnv === 'ENV_DEV') {
            urlPrefix = this.baseURL;
          } else {
            urlPrefix = window.location.protocol + '//' + window.location.hostname + ':';
          }

          if (salType === 'AD_SAL') {
            return urlPrefix + this.adSalPort;
          } else if (salType === 'MD_SAL') {
            var basePort = this.mdSalPort;
            if (window.location.protocol === 'https:') {
                basePort = this.mdSalSecuredPort;
            }
            return urlPrefix + basePort;
          }
        }
        //default behavior
        return '';
      }
    });

  return config;
});
