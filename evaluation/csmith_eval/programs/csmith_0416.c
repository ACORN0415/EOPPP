/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 923424519 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      923424519
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_4 = 0x1C29L;
static int32_t g_14[8] = {0x38B6B0E1L,0x38B6B0E1L,0x38B6B0E1L,0x38B6B0E1L,0x38B6B0E1L,0x38B6B0E1L,0x38B6B0E1L,0x38B6B0E1L};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static const int32_t * func_2(int16_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_14
 * writes: g_14 g_4
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    const int32_t *l_17 = &g_14[3];
    const int32_t **l_16 = &l_17;
    (*l_16) = func_2(g_4);
    for (g_4 = 0; (g_4 <= 7); g_4 += 1)
    { /* block id: 11 */
        int i;
        (*l_16) = &g_14[g_4];
    }
    (*l_16) = (*l_16);
    return (**l_16);
}


/* ------------------------------------------ */
/* 
 * reads : g_4 g_14
 * writes: g_14
 */
static const int32_t * func_2(int16_t  p_3)
{ /* block id: 1 */
    const int32_t *l_15 = &g_14[4];
    for (p_3 = (-24); (p_3 >= (-15)); p_3++)
    { /* block id: 4 */
        int32_t *l_13[8] = {&g_14[2],&g_14[2],&g_14[2],&g_14[2],&g_14[2],&g_14[2],&g_14[2],&g_14[2]};
        int i;
        g_14[2] &= (((safe_mul_func_uint8_t_u_u(g_4, 2L)) ^ (safe_rshift_func_int16_t_s_u(((safe_div_func_uint16_t_u_u(g_4, p_3)) , 0x3467L), 13))) , 0xA82A10AAL);
    }
    return l_15;
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    for (i = 0; i < 8; i++)
    {
        csmith_sink_ = g_14[i];
    }
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

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
   depth: 1, occurrence: 8
   depth: 2, occurrence: 3
   depth: 7, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 5

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
   level: 2, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 13
XXX times a non-volatile is write: 9
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 22.2
XXX percentage an existing variable is used: 77.8
********************* end of statistics **********************/

