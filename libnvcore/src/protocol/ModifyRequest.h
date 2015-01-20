/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_ModifyRequest_H_
#define	_ModifyRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DNDSObject.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ModifyRequest */
typedef DNDSObject_t	 ModifyRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ModifyRequest;
asn_struct_free_f ModifyRequest_free;
asn_struct_print_f ModifyRequest_print;
asn_constr_check_f ModifyRequest_constraint;
ber_type_decoder_f ModifyRequest_decode_ber;
der_type_encoder_f ModifyRequest_encode_der;
xer_type_decoder_f ModifyRequest_decode_xer;
xer_type_encoder_f ModifyRequest_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ModifyRequest_H_ */
#include <asn_internal.h>
