/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 890826211 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      890826211
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   unsigned f0 : 15;
   uint8_t  f1;
   const int32_t  f2;
   uint16_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 9L;
static union U1 g_8 = {4294967295UL};
static int32_t g_10 = 0x1E9C96C7L;


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t * func_5(int32_t * p_6, union U1  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_8 g_10
 * writes: g_2 g_10
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_13 = (-1L);
    for (g_2 = 0; (g_2 == 23); g_2 = safe_add_func_uint8_t_u_u(g_2, 6))
    { /* block id: 3 */
        int32_t *l_12 = &g_10;
        int32_t **l_11 = &l_12;
        (*l_11) = func_5(&g_2, g_8);
        return g_2;
    }
    return l_13;
}


/* ------------------------------------------ */
/* 
 * reads : g_2 g_10
 * writes: g_10
 */
static int32_t * func_5(int32_t * p_6, union U1  p_7)
{ /* block id: 4 */
    int32_t *l_9 = &g_10;
    (*l_9) &= (*p_6);
    return &g_10;
}




/* ---------------------------------------- */
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    csmith_sink_ = g_8.f0;
    csmith_sink_ = g_10;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

