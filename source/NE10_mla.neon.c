/*
 *  Copyright 2011-12 ARM Limited
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
 * NE10 Library : source/NE10_mla.neon.c
 */

#include "NE10.h"
#include "../headers/macros.h"

#include <assert.h>
#include <arm_neon.h>

arm_result_t mla_float_neon(arm_float_t * dst, arm_float_t * acc, arm_float_t * src1, arm_float_t * src2, unsigned int count)
{
    NE10_MLA_OPERATION_FLOAT_NEON
    (
        n_dst = vmlaq_f32( n_acc, n_src, n_src2 );
        ,
        n_tmp_src = vmla_f32( n_tmp_acc, n_tmp_src, n_tmp_src2 );
    );
}
