/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 699925231 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      699925231
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U4 {
   int32_t  f0;
   uint16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 0xA9017CA4L;
static uint32_t g_5 = 0xB79DF948L;
static int32_t g_16[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static union U4 g_17 = {8L};


/* --- FORWARD DECLARATIONS --- */
static union U4  func_1(void);
static uint32_t  func_6(int8_t * p_7, const int32_t  p_8, uint64_t  p_9, int32_t * p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_16 g_17
 * writes: g_4 g_5 g_16
 */
static union U4  func_1(void)
{ /* block id: 0 */
    uint32_t l_2 = 6UL;
    int32_t *l_3[4];
    int8_t *l_11 = (void*)0;
    const uint32_t l_12 = 0xB8CEFFB9L;
    int i;
    for (i = 0; i < 4; i++)
        l_3[i] = (void*)0;
    g_4 &= l_2;
    g_16[5] = (((g_5 = 1L) && func_6(l_11, l_12, g_4, l_3[3])) , 1L);
    return g_17;
}


/* ------------------------------------------ */
/* 
 * reads : g_4 g_16
 * writes: g_16
 */
static uint32_t  func_6(int8_t * p_7, const int32_t  p_8, uint64_t  p_9, int32_t * p_10)
{ /* block id: 3 */
    int32_t *l_15 = &g_16[5];
    (*l_15) ^= (safe_add_func_int16_t_s_s(8L, g_4));
    return (*l_15);
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4;
    csmith_sink_ = g_5;
    for (i = 0; i < 9; i++)
    {
        csmith_sink_ = g_16[i];
    }
    csmith_sink_ = g_17.f0;
    csmith_sink_ = g_17.f1;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1
   depth: 8, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 80
XXX average alias set size: 1

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

