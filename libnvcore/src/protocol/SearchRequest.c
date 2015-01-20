/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#include "SearchRequest.h"

static asn_TYPE_member_t asn_MBR_SearchRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SearchRequest, searchtype),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SearchType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"searchtype"
		},
	{ ATF_POINTER, 3, offsetof(struct SearchRequest, objectname),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObjectName,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objectname"
		},
	{ ATF_POINTER, 2, offsetof(struct SearchRequest, object),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DNDSObject,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"object"
		},
	{ ATF_POINTER, 1, offsetof(struct SearchRequest, objects),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DNDSObjects,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"objects"
		},
};
static ber_tlv_tag_t asn_DEF_SearchRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SearchRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* searchtype */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* objectname */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* object */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* objects */
};
static asn_SEQUENCE_specifics_t asn_SPC_SearchRequest_specs_1 = {
	sizeof(struct SearchRequest),
	offsetof(struct SearchRequest, _asn_ctx),
	asn_MAP_SearchRequest_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SearchRequest = {
	"SearchRequest",
	"SearchRequest",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SearchRequest_tags_1,
	sizeof(asn_DEF_SearchRequest_tags_1)
		/sizeof(asn_DEF_SearchRequest_tags_1[0]), /* 1 */
	asn_DEF_SearchRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_SearchRequest_tags_1)
		/sizeof(asn_DEF_SearchRequest_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SearchRequest_1,
	4,	/* Elements count */
	&asn_SPC_SearchRequest_specs_1	/* Additional specs */
};

