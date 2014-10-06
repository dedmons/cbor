// Copyright (c) 2014 Douglas Edmonson Jr. All rights reserved.
#ifndef CBOR_VERSION__H
#define CBOR_VERSION__H

#ifdef __cplusplus
#   define EXTERNC extern "C"
#else
#   define EXTERNC
#endif

EXTERNC int cbor_version_major();
EXTERNC int cbor_version_minor();
EXTERNC int cbor_version_patch();

#endif /* CBOR_VERSION__H */
