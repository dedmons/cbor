// Copyright (c) 2014 Douglas Edmonson Jr. All rights reserved.
#ifndef HEADER_CBOR_VERSION_H_INCLUDED
#define HEADER_CBOR_VERSION_H_INCLUDED

#ifdef __cplusplus
#   define EXTERNC extern "C"
#else
#   define EXTERNC
#endif

EXTERNC int cbor_version_major();
EXTERNC int cbor_version_minor();
EXTERNC int cbor_version_patch();

#endif
