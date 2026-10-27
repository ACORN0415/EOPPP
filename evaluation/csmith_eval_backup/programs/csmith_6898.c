/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 2005328464 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      2005328464
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 22;
};
#pragma pack(pop)

struct S1 {
   unsigned f0 : 11;
   signed f1 : 1;
   signed f2 : 2;
   struct S0  f3;
   unsigned f4 : 12;
   const uint8_t  f5;
   signed f6 : 26;
};

/* --- GLOBAL VARIABLES --- */
static const int8_t *g_2 = (void*)0;
static int16_t g_7 = 1L;
static int32_t g_10 = 0xF66B17B7L;
static int8_t g_13 = 0x2FL;
static struct S1 g_20 = {21,-0,1,{1631},23,255UL,3221};
static struct S1 *g_19 = &g_20;
static struct S1 g_22 = {16,0,-0,{229},52,250UL,-3217};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int64_t  func_3(int32_t  p_4, const int32_t  p_5, uint64_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7 g_19 g_22.f2 g_20.f4 g_10
 * writes: g_10
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int8_t l_8 = 0x4CL;
    int32_t *l_23 = (void*)0;
    int32_t *l_24 = &g_10;
    (*l_24) = ((((void*)0 == g_2) ^ func_3(g_7, g_7, l_8)) == g_20.f4);
    return (*l_24);
}


/* ------------------------------------------ */
/* 
 * reads : g_19 g_22.f2
 * writes:
 */
static int64_t  func_3(int32_t  p_4, const int32_t  p_5, uint64_t  p_6)
{ /* block id: 1 */
    int32_t *l_9 = &g_10;
    int32_t **l_11 = &l_9;
    int32_t *l_12[4];
    uint64_t l_14 = 18446744073709551615UL;
    struct S1 *l_21 = &g_22;
    int i;
    for (i = 0; i < 4; i++)
        l_12[i] = &g_10;
    l_12[0] = ((*l_11) = l_9);
    --l_14;
    for (l_14 = 0; (l_14 < 59); l_14 = safe_add_func_uint8_t_u_u(l_14, 2))
    { /* block id: 7 */
        (*l_11) = (void*)0;
        return p_5;
    }
    l_21 = g_19;
    return g_22.f2;
}




/* ---------------------------------------- */
int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_10;
    csmith_sink_ = g_13;
    csmith_sink_ = g_20.f0;
    csmith_sink_ = g_20.f1;
    csmith_sink_ = g_20.f2;
    csmith_sink_ = g_20.f3.f0;
    csmith_sink_ = g_20.f4;
    csmith_sink_ = g_20.f5;
    csmith_sink_ = g_20.f6;
    csmith_sink_ = g_22.f0;
    csmith_sink_ = g_22.f1;
    csmith_sink_ = g_22.f2;
    csmith_sink_ = g_22.f3.f0;
    csmith_sink_ = g_22.f4;
    csmith_sink_ = g_22.f5;
    csmith_sink_ = g_22.f6;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 9
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 5
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

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 2
   depth: 7, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 71

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 37.5
XXX average alias set size: 1.25

XXX times a non-volatile is read: 12
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

XXX percentage a fresh-made variable is used: 40.9
XXX percentage an existing variable is used: 59.1
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

