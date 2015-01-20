/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_P2pRequest_H_
#define	_P2pRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include "P2pSide.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* P2pRequest */
typedef struct P2pRequest {
	OCTET_STRING_t	 macAddrDst;
	OCTET_STRING_t	 ipAddrDst;
	unsigned long	 port;
	P2pSide_t	 side;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} P2pRequest_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_port_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_P2pRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _P2pRequest_H_ */
#include <asn_internal.h>
