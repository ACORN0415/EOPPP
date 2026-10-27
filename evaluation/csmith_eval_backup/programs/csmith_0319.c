/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 297820737 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      297820737
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   signed f0 : 31;
};

/* --- GLOBAL VARIABLES --- */
static uint8_t g_4 = 0x37L;
static int32_t g_7 = (-1L);
static uint8_t g_10 = 1UL;
static uint16_t g_39 = 0UL;
static int32_t g_40 = 8L;
static uint16_t g_41[1][10] = {{0x3830L,0x3830L,0x3830L,0x3830L,0x3830L,0x3830L,0x3830L,0x3830L,0x3830L,0x3830L}};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static uint16_t  func_13(int32_t * p_14, int32_t  p_15, union U0  p_16);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7 g_10 g_40 g_41 g_39
 * writes: g_7 g_10 g_4 g_39 g_40
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    uint64_t l_5[5];
    int32_t *l_6 = &g_7;
    int32_t *l_8 = (void*)0;
    int32_t *l_9[4];
    int32_t *l_17 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_5[i] = 1UL;
    for (i = 0; i < 4; i++)
        l_9[i] = (void*)0;
    (*l_6) &= (((safe_div_func_uint16_t_u_u(65531UL, g_4)) , g_4) ^ l_5[3]);
    ++g_10;
    for (g_4 = 0; (g_4 <= 4); g_4 += 1)
    { /* block id: 5 */
        union U0 l_18 = {-3L};
        uint16_t *l_38 = &g_39;
        int i;
        g_40 |= (((((*l_38) = func_13(l_17, (l_5[g_4] <= l_5[g_4]), l_18)) < l_5[g_4]) & 0x171C2502L) < l_5[g_4]);
        return g_41[0][2];
    }
    return g_39;
}


/* ------------------------------------------ */
/* 
 * reads : g_4 g_10 g_7
 * writes:
 */
static uint16_t  func_13(int32_t * p_14, int32_t  p_15, union U0  p_16)
{ /* block id: 6 */
    uint64_t l_29 = 0x37F1BD53D2AE4566LL;
    const int32_t * const l_30 = &g_7;
    int32_t l_31[8];
    int32_t *l_32 = &l_31[5];
    int i;
    for (i = 0; i < 8; i++)
        l_31[i] = 0L;
    (*l_32) = (((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(1L, (safe_add_func_uint16_t_u_u(p_16.f0, ((((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((l_29 , p_14) != l_30), g_4)), p_16.f0)) && p_15) ^ 0xB834L) | 0x3644L))))), p_16.f0)) & l_31[5]) ^ 255UL);
    p_16.f0 &= (safe_unary_minus_func_int64_t_s((g_10 ^ (safe_sub_func_uint16_t_u_u(g_10, ((safe_div_func_uint8_t_u_u(0x28L, 9UL)) | 0x7BL))))));
    return g_7;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_7;
    csmith_sink_ = g_10;
    csmith_sink_ = g_39;
    csmith_sink_ = g_40;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            csmith_sink_ = g_41[i][j];
        }
    }
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 1
XXX times a single bitfield on RHS: 3

XXX max expression depth: 13
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 1
   depth: 4, occurrence: 1
   depth: 5, occurrence: 1
   depth: 9, occurrence: 1
   depth: 13, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 40

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 8
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 24
XXX times a non-volatile is write: 10
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 9
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 31.2
XXX percentage an existing variable is used: 68.8
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

