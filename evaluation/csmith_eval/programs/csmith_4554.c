/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 2918630945 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      2918630945
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   const int64_t  f0;
   int32_t  f1;
   int8_t * const  f2;
   uint32_t  f3;
   const int8_t * f4;
};

/* --- GLOBAL VARIABLES --- */
static int8_t g_2[7][2] = {{0x43L,0x32L},{0xDFL,0xDFL},{0x32L,0x43L},{(-8L),0x43L},{0x32L,0xDFL},{0xDFL,0x32L},{0x43L,(-8L)}};
static int32_t g_3 = 0x2250DB85L;
static int32_t g_4 = 0x717BE9FBL;
static union U2 g_5 = {0L};


/* --- FORWARD DECLARATIONS --- */
static union U2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_3 g_4 g_2
 */
static union U2  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; g_3 < 7; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 2; g_4 += 1)
        {
            g_2[g_3][g_4] = 1L;
        }
    }
    return g_5;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            csmith_sink_ = g_2[i][j];
        }
    }
    csmith_sink_ = g_3;
    csmith_sink_ = g_4;
    csmith_sink_ = g_5.f0;
    csmith_sink_ = g_5.f1;
    csmith_sink_ = g_5.f3;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 2

XXX total number of pointers: 4

XXX times a variable address is taken: 0
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

