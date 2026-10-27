/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 155426960 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      155426960
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 3;
};
#pragma pack(pop)

struct S3 {
   uint64_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static struct S3 g_4 = {0UL};
static const struct S1 g_6[7][7] = {{{-0},{-1},{-1},{-1},{-1},{-0},{-1}},{{-0},{1},{-0},{-0},{-1},{1},{1}},{{-1},{0},{-0},{1},{-0},{0},{-1}},{{0},{1},{-1},{-0},{-1},{0},{-0}},{{-0},{-1},{1},{1},{1},{1},{-1}},{{1},{-1},{-1},{1},{-1},{-0},{-1}},{{0},{1},{-0},{0},{0},{1},{1}}};
static struct S1 g_8 = {1};
static int32_t g_11[4] = {0L,0L,0L,0L};
static int32_t *g_15 = &g_11[3];
static int32_t *g_16 = &g_11[1];


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);
static struct S3  func_2(struct S3  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_6
 * writes: g_4.f0 g_8 g_11 g_15 g_16 g_4
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    struct S3 *l_19 = &g_4;
    struct S1 l_20[4] = {{-0},{-0},{-0},{-0}};
    int i;
    (*l_19) = func_2(g_4);
    return l_20[2];
}


/* ------------------------------------------ */
/* 
 * reads : g_4.f0 g_6
 * writes: g_4.f0 g_8 g_11 g_15 g_16
 */
static struct S3  func_2(struct S3  p_3)
{ /* block id: 1 */
    uint64_t l_5[8];
    int32_t l_17[2][8] = {{0x66C4779DL,0x18C84B7BL,0x66C4779DL,0x18C84B7BL,0x66C4779DL,0x18C84B7BL,0x66C4779DL,0x18C84B7BL},{0x66C4779DL,0x18C84B7BL,0x66C4779DL,0x18C84B7BL,0x66C4779DL,0x18C84B7BL,0x66C4779DL,0x18C84B7BL}};
    struct S3 l_18 = {0x7B30477AE2718B96LL};
    int i, j;
    for (i = 0; i < 8; i++)
        l_5[i] = 0x902DAFBBD0A7084BLL;
    for (g_4.f0 = 0; (g_4.f0 <= 7); g_4.f0 += 1)
    { /* block id: 4 */
        struct S1 *l_7 = (void*)0;
        int32_t *l_9 = (void*)0;
        int32_t *l_10 = &g_11[1];
        int32_t **l_12 = &l_9;
        int32_t **l_13 = (void*)0;
        int32_t **l_14 = &l_10;
        int i;
        g_8 = g_6[4][5];
        (*l_10) = l_5[g_4.f0];
        l_17[1][5] = ((g_16 = (g_15 = ((*l_14) = ((*l_12) = l_9)))) != (void*)0);
    }
    return l_18;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_4.f0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {

        }
    }
    csmith_sink_ = g_8.f0;
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_11[i];
    }
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 5
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 3
breakdown:
   indirect level: 0, occurrence: 3
XXX full-bitfields structs in the program: 3
breakdown:
   indirect level: 0, occurrence: 3
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 1
XXX times a bitfields struct on RHS: 2
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 2
   depth: 6, occurrence: 1

XXX total number of pointers: 9

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 5

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 8
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 66.7
XXX average alias set size: 1.33

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 13
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 88.9
XXX percentage an existing variable is used: 11.1
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

