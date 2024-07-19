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

int yaksuri_seqi_pack_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths2 = type->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs2 = type->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < array_of_blocklengths2[j2]; k2++) {
                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs2[j2] + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < array_of_blocklengths2[j2]; k2++) {
                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs2[j2] + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < array_of_blocklengths2[j2]; k2++) {
                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs2[j2] + k2 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                        idx += sizeof(long double _Complex);
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

int yaksuri_seqi_unpack_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count2 = type->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths2 = type->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs2 = type->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < array_of_blocklengths2[j2]; k2++) {
                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs2[j2] + k2 * sizeof(long double _Complex))));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < array_of_blocklengths2[j2]; k2++) {
                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs2[j2] + k2 * sizeof(long double _Complex))));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j2 = 0; j2 < count2; j2++) {
                    for (intptr_t k2 = 0; k2 < array_of_blocklengths2[j2]; k2++) {
                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs2[j2] + k2 * sizeof(long double _Complex))));
                        idx += sizeof(long double _Complex);
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

int yaksuri_seqi_pack_hvector_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.hvector.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.hvector.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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

int yaksuri_seqi_unpack_hvector_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hvector.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.hvector.blocklength;
    intptr_t stride1 = type->u.hvector.stride;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hvector.child->extent;
    
    intptr_t count3 = type->u.hvector.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.hvector.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.hvector.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hvector.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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

int yaksuri_seqi_pack_blkhindx_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.blkhindx.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.blkhindx.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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

int yaksuri_seqi_unpack_blkhindx_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.blkhindx.count;
    intptr_t blocklength1 ATTRIBUTE((unused)) = type->u.blkhindx.blocklength;
    intptr_t *restrict array_of_displs1 = type->u.blkhindx.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.blkhindx.child->extent;
    
    intptr_t count3 = type->u.blkhindx.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.blkhindx.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.blkhindx.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.blkhindx.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < blocklength1; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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

int yaksuri_seqi_pack_hindexed_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.hindexed.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.hindexed.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
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

int yaksuri_seqi_unpack_hindexed_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths1 = type->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs1 = type->u.hindexed.array_of_displs;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.hindexed.child->extent;
    
    intptr_t count3 = type->u.hindexed.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.hindexed.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.hindexed.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.hindexed.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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
                    for (intptr_t k1 = 0; k1 < array_of_blocklengths1[j1]; k1++) {
                        for (intptr_t j3 = 0; j3 < count3; j3++) {
                            for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                                YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs1[j1] + k1 * extent2 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
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

int yaksuri_seqi_pack_contig_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.contig.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.contig.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j3 = 0; j3 < count3; j3++) {
                        for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                            YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                            idx += sizeof(long double _Complex);
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
                    for (intptr_t j3 = 0; j3 < count3; j3++) {
                        for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                            YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                            idx += sizeof(long double _Complex);
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
                    for (intptr_t j3 = 0; j3 < count3; j3++) {
                        for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                            YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + j1 * stride1 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                            idx += sizeof(long double _Complex);
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

int yaksuri_seqi_unpack_contig_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    intptr_t count1 = type->u.contig.count;
    intptr_t stride1 = type->u.contig.child->extent;
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.contig.child->extent;
    
    intptr_t count3 = type->u.contig.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.contig.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.contig.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.contig.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j1 = 0; j1 < count1; j1++) {
                    for (intptr_t j3 = 0; j3 < count3; j3++) {
                        for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                            YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
                            idx += sizeof(long double _Complex);
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
                    for (intptr_t j3 = 0; j3 < count3; j3++) {
                        for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                            YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
                            idx += sizeof(long double _Complex);
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
                    for (intptr_t j3 = 0; j3 < count3; j3++) {
                        for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                            YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + j1 * stride1 + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
                            idx += sizeof(long double _Complex);
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

int yaksuri_seqi_pack_resized_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.resized.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.resized.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j3 = 0; j3 < count3; j3++) {
                    for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j3 = 0; j3 < count3; j3++) {
                    for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j3 = 0; j3 < count3; j3++) {
                    for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + i * extent + array_of_displs3[j3] + k3 * sizeof(long double _Complex))), *((long double _Complex *) (void *) (dbuf + idx)));
                        idx += sizeof(long double _Complex);
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

int yaksuri_seqi_unpack_resized_resized_hindexed_c_long_double_complex(const void *inbuf, void *outbuf, uintptr_t count, yaksi_type_s * type, yaksa_op_t op)
{
    int rc = YAKSA_SUCCESS;
    const char *restrict sbuf = (const char *) inbuf;
    char *restrict dbuf = (char *) outbuf;
    uintptr_t extent ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent1 ATTRIBUTE((unused)) = type->extent;
    
    uintptr_t extent2 ATTRIBUTE((unused)) = type->u.resized.child->extent;
    
    intptr_t count3 = type->u.resized.child->u.resized.child->u.hindexed.count;
    intptr_t *restrict array_of_blocklengths3 = type->u.resized.child->u.resized.child->u.hindexed.array_of_blocklengths;
    intptr_t *restrict array_of_displs3 = type->u.resized.child->u.resized.child->u.hindexed.array_of_displs;
    uintptr_t extent3 ATTRIBUTE((unused)) = type->u.resized.child->u.resized.child->extent;
    
    uintptr_t idx = 0;
    switch (op) {
        case YAKSA_OP__REPLACE:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j3 = 0; j3 < count3; j3++) {
                    for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                        YAKSURI_SEQI_OP_REPLACE(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__PROD:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j3 = 0; j3 < count3; j3++) {
                    for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                        YAKSURI_SEQI_OP_PROD(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
                        idx += sizeof(long double _Complex);
                    }
                }
            }
            break;
        }
        
        case YAKSA_OP__SUM:
        {
            for (intptr_t i = 0; i < count; i++) {
                for (intptr_t j3 = 0; j3 < count3; j3++) {
                    for (intptr_t k3 = 0; k3 < array_of_blocklengths3[j3]; k3++) {
                        YAKSURI_SEQI_OP_SUM(*((const long double _Complex *) (const void *) (sbuf + idx)), *((long double _Complex *) (void *) (dbuf + i * extent + array_of_displs3[j3] + k3 * sizeof(long double _Complex))));
                        idx += sizeof(long double _Complex);
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
