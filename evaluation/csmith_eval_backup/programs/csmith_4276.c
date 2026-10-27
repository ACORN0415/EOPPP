/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 614425153 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      614425153
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   const int32_t  f0;
   int8_t  f1;
   const uint8_t  f2;
   const int64_t  f3;
   const int8_t * f4;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4[5] = {2L,2L,2L,2L,2L};
static int8_t g_15 = 0xC1L;
static int8_t *g_14 = &g_15;
static int32_t g_18 = 0x8E55A441L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int32_t  func_7(int8_t  p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_14 g_15 g_18
 * writes: g_4 g_18 g_15
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int8_t *l_2 = (void*)0;
    int32_t *l_3 = &g_4[3];
    int32_t *l_17 = &g_18;
    (*l_3) &= ((void*)0 != l_2);
    (*l_17) ^= (safe_div_func_int32_t_s_s(func_7((*l_3)), g_15));
    for (g_15 = 1; (g_15 <= 4); g_15 += 1)
    { /* block id: 8 */
        int64_t l_19 = 2L;
        for (g_18 = 1; (g_18 <= 4); g_18 += 1)
        { /* block id: 11 */
            int i;
            if (g_4[g_15])
                break;
            return l_19;
        }
    }
    return (*l_17);
}


/* ------------------------------------------ */
/* 
 * reads : g_14 g_15 g_4
 * writes: g_4
 */
static int32_t  func_7(int8_t  p_8)
{ /* block id: 2 */
    union U1 l_9 = {0x01078932L};
    int32_t *l_16 = &g_4[0];
    (*l_16) = (((l_9 , (safe_mod_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((void*)0 == g_14), l_9.f1)), (*g_14)))) >= 0xF5FAL) , g_4[1]);
    return (*l_16);
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 5; i++)
    {
        csmith_sink_ = g_4[i];
    }
    csmith_sink_ = g_15;
    csmith_sink_ = g_18;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 7, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 2
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 7

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 12
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1

XXX times a non-volatile is read: 18
XXX times a non-volatile is write: 8
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 9
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 1
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 36.4
XXX percentage an existing variable is used: 63.6
********************* end of statistics **********************/

