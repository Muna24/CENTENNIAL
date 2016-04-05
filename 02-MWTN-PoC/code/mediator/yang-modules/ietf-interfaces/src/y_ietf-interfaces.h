
#ifndef _H_y_ietf_interfaces
#define _H_y_ietf_interfaces
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

    Yuma SIL header
    module ietf-interfaces
    revision 2014-05-08
    namespace urn:ietf:params:xml:ns:yang:ietf-interfaces
    organization IETF NETMOD (NETCONF Data Modeling Language) Working Group

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_ietf_interfaces_M_ietf_interfaces (const xmlChar *)"ietf-interfaces"
#define y_ietf_interfaces_R_ietf_interfaces (const xmlChar *)"2014-05-08"

#define y_ietf_interfaces_I_interface_type (const xmlChar *)"interface-type"

#define y_ietf_interfaces_N_admin_status (const xmlChar *)"admin-status"
#define y_ietf_interfaces_N_description (const xmlChar *)"description"
#define y_ietf_interfaces_N_discontinuity_time (const xmlChar *)"discontinuity-time"
#define y_ietf_interfaces_N_enabled (const xmlChar *)"enabled"
#define y_ietf_interfaces_N_higher_layer_if (const xmlChar *)"higher-layer-if"
#define y_ietf_interfaces_N_if_index (const xmlChar *)"if-index"
#define y_ietf_interfaces_N_in_broadcast_pkts (const xmlChar *)"in-broadcast-pkts"
#define y_ietf_interfaces_N_in_discards (const xmlChar *)"in-discards"
#define y_ietf_interfaces_N_in_errors (const xmlChar *)"in-errors"
#define y_ietf_interfaces_N_in_multicast_pkts (const xmlChar *)"in-multicast-pkts"
#define y_ietf_interfaces_N_in_octets (const xmlChar *)"in-octets"
#define y_ietf_interfaces_N_in_unicast_pkts (const xmlChar *)"in-unicast-pkts"
#define y_ietf_interfaces_N_in_unknown_protos (const xmlChar *)"in-unknown-protos"
#define y_ietf_interfaces_N_interface (const xmlChar *)"interface"
#define y_ietf_interfaces_N_interfaces (const xmlChar *)"interfaces"
#define y_ietf_interfaces_N_interfaces_state (const xmlChar *)"interfaces-state"
#define y_ietf_interfaces_N_last_change (const xmlChar *)"last-change"
#define y_ietf_interfaces_N_link_up_down_trap_enable (const xmlChar *)"link-up-down-trap-enable"
#define y_ietf_interfaces_N_lower_layer_if (const xmlChar *)"lower-layer-if"
#define y_ietf_interfaces_N_name (const xmlChar *)"name"
#define y_ietf_interfaces_N_oper_status (const xmlChar *)"oper-status"
#define y_ietf_interfaces_N_out_broadcast_pkts (const xmlChar *)"out-broadcast-pkts"
#define y_ietf_interfaces_N_out_discards (const xmlChar *)"out-discards"
#define y_ietf_interfaces_N_out_errors (const xmlChar *)"out-errors"
#define y_ietf_interfaces_N_out_multicast_pkts (const xmlChar *)"out-multicast-pkts"
#define y_ietf_interfaces_N_out_octets (const xmlChar *)"out-octets"
#define y_ietf_interfaces_N_out_unicast_pkts (const xmlChar *)"out-unicast-pkts"
#define y_ietf_interfaces_N_phys_address (const xmlChar *)"phys-address"
#define y_ietf_interfaces_N_speed (const xmlChar *)"speed"
#define y_ietf_interfaces_N_statistics (const xmlChar *)"statistics"
#define y_ietf_interfaces_N_type (const xmlChar *)"type"
/********************************************************************
* FUNCTION y_ietf_interfaces_init
* 
* initialize the ietf-interfaces server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_ietf_interfaces_init (
    const xmlChar *modname,
    const xmlChar *revision);

/********************************************************************
* FUNCTION y_ietf_interfaces_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_ietf_interfaces_init2 (void);

/********************************************************************
* FUNCTION y_ietf_interfaces_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_ietf_interfaces_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif