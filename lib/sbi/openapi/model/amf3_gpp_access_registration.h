/*
 * amf3_gpp_access_registration.h
 *
 *
 */

#ifndef _OpenAPI_amf3_gpp_access_registration_H_
#define _OpenAPI_amf3_gpp_access_registration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "backup_amf_info.h"
#include "guami.h"
#include "ims_vo_ps.h"
#include "rat_type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_amf3_gpp_access_registration_s OpenAPI_amf3_gpp_access_registration_t;
typedef struct OpenAPI_amf3_gpp_access_registration_s {
    char *amf_instance_id;
    char *supported_features;
    int purge_flag;
    char *pei;
    struct OpenAPI_ims_vo_ps_s *ims_vo_ps;
    char *dereg_callback_uri;
    char *amf_service_name_dereg;
    char *pcscf_restoration_callback_uri;
    char *amf_service_name_pcscf_rest;
    int initial_registration_ind;
    struct OpenAPI_guami_s *guami;
    OpenAPI_list_t *backup_amf_info;
    int dr_flag;
    struct OpenAPI_rat_type_s *rat_type;
    int urrp_indicator;
    char *amf_ee_subscription_id;
    int ue_srvcc_capability;
    char *nid;
    char *registration_time;
    char *vgmlc_address_ipv4;
    char *vgmlc_address_ipv6;
    char *vgmlc_fqdn;
} OpenAPI_amf3_gpp_access_registration_t;

OpenAPI_amf3_gpp_access_registration_t *OpenAPI_amf3_gpp_access_registration_create(
    char *amf_instance_id,
    char *supported_features,
    int purge_flag,
    char *pei,
    OpenAPI_ims_vo_ps_t *ims_vo_ps,
    char *dereg_callback_uri,
    char *amf_service_name_dereg,
    char *pcscf_restoration_callback_uri,
    char *amf_service_name_pcscf_rest,
    int initial_registration_ind,
    OpenAPI_guami_t *guami,
    OpenAPI_list_t *backup_amf_info,
    int dr_flag,
    OpenAPI_rat_type_t *rat_type,
    int urrp_indicator,
    char *amf_ee_subscription_id,
    int ue_srvcc_capability,
    char *nid,
    char *registration_time,
    char *vgmlc_address_ipv4,
    char *vgmlc_address_ipv6,
    char *vgmlc_fqdn
    );
void OpenAPI_amf3_gpp_access_registration_free(OpenAPI_amf3_gpp_access_registration_t *amf3_gpp_access_registration);
OpenAPI_amf3_gpp_access_registration_t *OpenAPI_amf3_gpp_access_registration_parseFromJSON(cJSON *amf3_gpp_access_registrationJSON);
cJSON *OpenAPI_amf3_gpp_access_registration_convertToJSON(OpenAPI_amf3_gpp_access_registration_t *amf3_gpp_access_registration);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_amf3_gpp_access_registration_H_ */
