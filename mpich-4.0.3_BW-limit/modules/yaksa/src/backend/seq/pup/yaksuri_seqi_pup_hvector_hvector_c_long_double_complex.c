/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *
 * DO NOT EDIT: AUTOMATICALLY GENERATED FILE !!
 */

#include <string.h>
#include <stdint.h>
#include <wchar.h>
#include "yaksuri_seqi_pup.h"

int yaksuri_seqi_pack_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 1; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 1; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 1; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 1; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 1; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 1; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 2; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 2; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 2; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 2; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 2; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 2; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 3; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 3; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 3; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 3; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 3; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 3; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 4; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 4; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 4; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 4; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 4; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 4; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 5; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 5; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 5; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 5; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 5; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 5; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 6; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 6; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 6; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 6; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 6; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 6; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 7; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 7; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 7; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 7; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 7; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 7; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 8; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 8; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 8; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 8; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 8; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < 8; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hvector_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hvector_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hvector.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hvector.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hvector.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_blkhindx_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_blkhindx_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.blkhindx.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.blkhindx.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.blkhindx.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 1; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 2; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 4; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 5; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 6; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 7; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < 8; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_hindexed_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_hindexed_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.hindexed.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.hindexed.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.hindexed.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j2 = 0; j2 < count2; j2++) {
                            for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                                for (intptr_t j3 = 0; j3 < count3; j3++) {
                                    for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                        idx += sizeof(long double _Complex);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 1; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 1; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 1; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 1; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 1; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 1; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 2; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 2; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 2; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 2; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 2; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 2; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 3; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 3; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 3; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 3; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 3; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 3; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 4; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 4; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 4; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 4; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 4; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 4; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 5; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 5; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 5; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 5; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 5; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 5; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 6; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 6; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 6; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 6; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 6; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 6; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 7; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 7; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 7; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 7; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 7; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 7; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 8; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 8; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 8; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 8; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 8; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < 8; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_contig_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_contig_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.contig.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.contig.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.contig.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                    YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                    YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j2 = 0; j2 < count2; j2++) {
                        for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                            for (intptr_t j3 = 0; j3 < count3; j3++) {
                                for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                    YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                    idx += sizeof(long double _Complex);
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 1; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 1; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 1; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_1_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 1; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 1; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 1; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 2; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 2; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 2; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_2_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 2; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 2; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 2; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 3; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 3; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 3; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_3_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 3; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 3; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 3; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 4; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 4; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 4; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_4_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 4; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 4; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 4; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 5; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 5; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 5; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_5_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 5; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 5; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 5; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 6; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 6; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 6; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_6_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 6; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 6; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 6; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 7; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 7; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 7; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_7_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 7; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 7; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 7; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 8; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 8; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 8; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_8_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 8; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 8; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < 8; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_pack_resized_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

int yaksuri_seqi_unpack_resized_hvector_hvector_blklen_generic_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hvector.count;
    intptr_t blocklength2 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.blocklength;
    intptr_t stride2 = type->u.resized.child->u.hvector.stride;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.hvector.child->u.hvector.count;
    intptr_t blocklength3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->u.hvector.blocklength;
    intptr_t stride3 = type->u.resized.child->u.hvector.child->u.hvector.stride;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.hvector.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < blocklength2; k2++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < blocklength3; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j2 * stride2 + k2 * extent3 + j3 * stride3 + k3 * sizeof(long double _Complex))));
                                idx += sizeof(long double _Complex);
                            }
                        }
                    }
                }
            }
            break;
        }
        
        default:
            break;
    }
    
    return rc;
}

