/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "TestModule"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_TestType_H_
#define	_TestType_H_


#include <./lib/asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <UTF8String.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TestType */
typedef struct TestType {
	long	 num;
	UTF8String_t	*str	/* OPTIONAL */;

	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TestType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TestType;

#ifdef __cplusplus
}
#endif

#endif	/* _TestType_H_ */
