/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 583828019 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      583828019
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
   uint16_t  f1;
   uint16_t  f2;
   const uint16_t  f3;
   struct S0  f4;
   uint64_t  f5;
   uint32_t  f6;
   uint8_t  f7;
};
#pragma pack(pop)

union U2 {
   int8_t  f0;
   const int16_t  f1;
   uint16_t  f2;
   const struct S1  f3;
   uint32_t  f4;
};

union U3 {
   signed f0 : 8;
   uint32_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static union U3 g_8 = {0x2A3CC92EL};
static union U2 g_10 = {0xE1L};
static struct S1 g_11 = {{0x0CL},0x63CCL,8UL,1UL,{8UL},7UL,0x71362395L,0x2DL};
static int32_t g_15[8][7] = {{0x018EBDB8L,(-1L),6L,6L,(-1L),0x018EBDB8L,(-1L)},{0L,0x0D32DE9EL,0x8AD88CA0L,0x8F27142BL,(-6L),0x8F27142BL,0x8AD88CA0L},{0x800FF68EL,0x800FF68EL,0x018EBDB8L,6L,0x018EBDB8L,0x800FF68EL,0x800FF68EL},{0x6E311378L,0x0D32DE9EL,(-2L),0x0D32DE9EL,0x6E311378L,(-3L),0x8AD88CA0L},{0x2C237796L,(-1L),0x2C237796L,0x018EBDB8L,0x018EBDB8L,0x2C237796L,(-1L)},{0x8AD88CA0L,9L,(-2L),0xF6D1D89EL,(-6L),0x0D32DE9EL,(-6L)},{0x2C237796L,0x018EBDB8L,0x018EBDB8L,0x2C237796L,0x800FF68EL,6L,0x2C237796L},{0x8AD88CA0L,0x0D32DE9EL,0L,9L,0L,0x0D32DE9EL,0x8AD88CA0L}};
static struct S0 *g_23 = (void*)0;
static struct S0 g_28 = {5UL};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static union U2  func_2(union U3  p_3, struct S0  p_4, union U2  p_5, struct S1  p_6, union U3  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_8.f0 g_10 g_11 g_15 g_10.f2 g_23 g_10.f1
 * writes: g_15 g_10.f2 g_11.f4.f0 g_28
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    struct S0 l_9 = {0x96L};
    union U3 l_12 = {0x15BB0028L};
    struct S0 *l_26 = (void*)0;
    struct S0 *l_27[7] = {&g_11.f4,&g_11.f4,&g_11.f4,&g_11.f4,&g_11.f4,&g_11.f4,&g_11.f4};
    int i;
    g_28 = (func_2(g_8, (g_8.f0 , l_9), g_10, g_11, l_12) , l_9);
    return g_11.f3;
}


/* ------------------------------------------ */
/* 
 * reads : g_15 g_10.f2 g_11.f4.f0 g_11.f0 g_23 g_10.f1 g_10
 * writes: g_15 g_10.f2 g_11.f4.f0
 */
static union U2  func_2(union U3  p_3, struct S0  p_4, union U2  p_5, struct S1  p_6, union U3  p_7)
{ /* block id: 1 */
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = &g_15[3][6];
lbl_20:
    (*l_14) |= 0x278EE3F2L;
    for (g_10.f2 = 29; (g_10.f2 >= 20); g_10.f2--)
    { /* block id: 5 */
        struct S0 l_22[3][4] = {{{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL}}};
        struct S0 *l_25 = (void*)0;
        int i, j;
        for (p_5.f0 = 5; (p_5.f0 == (-30)); p_5.f0--)
        { /* block id: 8 */
            union U2 l_21 = {0x48L};
            struct S0 **l_24[9] = {&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23};
            int i;
            if (g_10.f2)
                goto lbl_20;
            for (g_11.f4.f0 = 0; (g_11.f4.f0 <= 6); g_11.f4.f0 += 1)
            { /* block id: 12 */
                return l_21;
            }
            l_22[2][0] = g_11.f0;
            l_25 = g_23;
        }
        if (g_10.f1)
            continue;
    }
    return g_10;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_8.f0;
    csmith_sink_ = g_10.f0;
    csmith_sink_ = g_10.f1;
    csmith_sink_ = g_10.f2;
    csmith_sink_ = g_11.f0.f0;
    csmith_sink_ = g_11.f1;
    csmith_sink_ = g_11.f2;
    csmith_sink_ = g_11.f3;
    csmith_sink_ = g_11.f4.f0;
    csmith_sink_ = g_11.f5;
    csmith_sink_ = g_11.f6;
    csmith_sink_ = g_11.f7;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            csmith_sink_ = g_15[i][j];
        }
    }
    csmith_sink_ = g_28.f0;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1
XXX total union variables: 4

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 1

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 12
   depth: 2, occurrence: 3
   depth: 8, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 4
XXX percent of pointers has null in alias set: 57.1
XXX average alias set size: 1.14

XXX times a non-volatile is read: 16
XXX times a non-volatile is write: 8
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 12
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2
   depth: 2, occurrence: 4
   depth: 3, occurrence: 1

XXX percentage a fresh-made variable is used: 62.5
XXX percentage an existing variable is used: 37.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

