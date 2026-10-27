/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 768430324 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      768430324
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   unsigned f0 : 8;
};

/* --- GLOBAL VARIABLES --- */
static struct S0 g_5 = {12};
static struct S0 *g_4 = &g_5;
static int32_t g_8[3] = {0x90EF307DL,0x90EF307DL,0x90EF307DL};


/* --- FORWARD DECLARATIONS --- */
static const uint32_t  func_1(void);
static struct S0 * func_2(struct S0 * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5.f0 g_8
 * writes: g_4 g_8
 */
static const uint32_t  func_1(void)
{ /* block id: 0 */
    struct S0 **l_6 = &g_4;
    int32_t *l_15 = &g_8[2];
    (*l_6) = func_2(((*l_6) = g_4));
    (*l_15) &= ((safe_add_func_int16_t_s_s(g_5.f0, 4UL)) , (safe_rshift_func_uint8_t_u_u(0x63L, 3)));
    return g_5.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static struct S0 * func_2(struct S0 * p_3)
{ /* block id: 2 */
    int32_t *l_7 = &g_8[1];
    int32_t **l_9 = &l_7;
    struct S0 *l_10 = &g_5;
    (*l_9) = l_7;
    return l_10;
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_5.f0;
    for (i = 0; i < 3; i++)
    {
        csmith_sink_ = g_8[i];
    }
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 0
   indirect level: 1, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 2
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 2

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 6
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 5
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 4
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 8
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

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

