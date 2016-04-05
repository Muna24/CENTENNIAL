
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    Yuma SIL module
    module MicrowaveModel-Notifications
    revision 2016-03-20
    namespace uri:onf:MicrowaveModel-Notifications

 */

#include <xmlstring.h>

#include "procdefs.h"
#include "agt.h"
#include "agt_cb.h"
#include "agt_not.h"
#include "agt_timer.h"
#include "agt_util.h"
#include "dlq.h"
#include "ncx.h"
#include "ncx_feature.h"
#include "ncxmod.h"
#include "ncxtypes.h"
#include "ses.h"
#include "status.h"
#include "val.h"
#include "val_util.h"
#include "xml_util.h"
#include "u_MicrowaveModel-Notifications.h"
#include "y_MicrowaveModel-Notifications.h"

/* module static variables */
static ncx_module_t *MicrowaveModel_Notifications_mod;

/********************************************************************
* FUNCTION y_MicrowaveModel_Notifications_init_static_vars
* 
* initialize module static variables
* 
********************************************************************/
static void y_MicrowaveModel_Notifications_init_static_vars (void)
{
    MicrowaveModel_Notifications_mod = NULL;

} /* y_MicrowaveModel_Notifications_init_static_vars */

/********************************************************************
* FUNCTION y_MicrowaveModel_Notifications_init
* 
* initialize the MicrowaveModel-Notifications server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
status_t y_MicrowaveModel_Notifications_init (
    const xmlChar *modname,
    const xmlChar *revision)
{
    status_t res = NO_ERR;
    agt_profile_t *agt_profile = agt_get_profile();

    y_MicrowaveModel_Notifications_init_static_vars();

    /* change if custom handling done */
    if (xml_strcmp(modname, y_MicrowaveModel_Notifications_M_MicrowaveModel_Notifications)) {
        return ERR_NCX_UNKNOWN_MODULE;
    }

    if (revision && xml_strcmp(revision, y_MicrowaveModel_Notifications_R_MicrowaveModel_Notifications)) {
        return ERR_NCX_WRONG_VERSION;
    }
    res = ncxmod_load_module(
        y_MicrowaveModel_Notifications_M_MicrowaveModel_Notifications,
        y_MicrowaveModel_Notifications_R_MicrowaveModel_Notifications,
        &agt_profile->agt_savedevQ,
        &MicrowaveModel_Notifications_mod);
    if (res != NO_ERR) {
        return res;
    }

    res = u_MicrowaveModel_Notifications_init(modname, revision);
    return res;
} /* y_MicrowaveModel_Notifications_init */

/********************************************************************
* FUNCTION y_MicrowaveModel_Notifications_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
status_t y_MicrowaveModel_Notifications_init2 (void)
{
    status_t res = NO_ERR;

    res = u_MicrowaveModel_Notifications_init2();

    return res;
} /* y_MicrowaveModel_Notifications_init2 */

/********************************************************************
* FUNCTION y_MicrowaveModel_Notifications_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
void y_MicrowaveModel_Notifications_cleanup (void)
{
    u_MicrowaveModel_Notifications_cleanup();

} /* y_MicrowaveModel_Notifications_cleanup */

/* END y_MicrowaveModel_Notifications.c */
