/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 239035357 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      239035357
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t  f0;
   uint64_t  f1;
   int64_t  f2;
   int32_t  f3;
   int64_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static union U0 g_8 = {6L};
static union U0 *g_7 = &g_8;
static int32_t g_13[6][5] = {{1L,(-8L),0x6F1FDBD0L,0L,0x6F1FDBD0L},{0L,0L,0x8B060D2FL,0x8D927F7BL,0x1E6E2BFBL},{7L,1L,0x8B060D2FL,7L,1L},{(-4L),0x8B060D2FL,0x6F1FDBD0L,0x8B060D2FL,(-4L)},{0x8D927F7BL,1L,0x1E6E2BFBL,(-4L),0L},{0x8D927F7BL,0L,1L,6L,6L}};


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);
static union U0 * func_2(union U0 * p_3, union U0 * p_4, int64_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8.f0 g_13
 * writes: g_8.f0 g_13 g_7
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    union U0 *l_6 = (void*)0;
    union U0 **l_15[3];
    int32_t l_16 = 2L;
    int i;
    for (i = 0; i < 3; i++)
        l_15[i] = &g_7;
    g_7 = func_2(l_6, g_7, g_8.f0);
    return l_16;
}


/* ------------------------------------------ */
/* 
 * reads : g_7 g_13
 * writes: g_8.f0 g_13
 */
static union U0 * func_2(union U0 * p_3, union U0 * p_4, int64_t  p_5)
{ /* block id: 1 */
    uint64_t l_9 = 18446744073709551615UL;
    int8_t *l_10 = (void*)0;
    int8_t *l_11 = &g_8.f0;
    int32_t *l_12[2];
    union U0 *l_14 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_12[i] = &g_13[3][1];
    g_13[4][0] |= (((*l_11) = l_9) & (((void*)0 != g_7) && 1UL));
    return l_14;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8.f0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            csmith_sink_ = g_13[i][j];
        }
    }
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 4
   depth: 4, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 10

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 9

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 60
XXX average alias set size: 1.1

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

