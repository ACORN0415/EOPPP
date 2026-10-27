/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 111832083 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      111832083
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   struct S0  f0;
};
#pragma pack(pop)

union U4 {
   int32_t  f0;
   int32_t  f1;
   const int16_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static int16_t g_2 = 0xB01DL;
static int32_t g_4[4][4][2] = {{{6L,3L},{(-1L),0x028F4E1CL},{(-1L),3L},{6L,(-1L)}},{{3L,0x028F4E1CL},{0x2EA21E1DL,0x2EA21E1DL},{6L,0x2EA21E1DL},{0x2EA21E1DL,0x028F4E1CL}},{{3L,(-1L)},{6L,3L},{(-1L),0x028F4E1CL},{(-1L),3L}},{{6L,(-1L)},{3L,0x028F4E1CL},{0x2EA21E1DL,0x2EA21E1DL},{6L,0x2EA21E1DL}}};
static union U4 g_9 = {-3L};
static uint8_t g_13 = 251UL;
static struct S1 g_21 = {{0x73EDE5C48968F25CLL,0x5ABA8D6EL,0x597A0B89L}};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static const struct S1  func_5(union U4  p_6, uint64_t  p_7, int32_t  p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4 g_9 g_9.f0
 * writes: g_4 g_13 g_21
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_3 = &g_4[0][1][1];
    struct S1 *l_19 = (void*)0;
    struct S1 *l_20 = &g_21;
    (*l_3) ^= (g_2 , 0xE66C619AL);
    (*l_20) = func_5(g_9, (*l_3), (*l_3));
    return g_9.f0;
}


/* ------------------------------------------ */
/* 
 * reads : g_4
 * writes: g_13 g_4
 */
static const struct S1  func_5(union U4  p_6, uint64_t  p_7, int32_t  p_8)
{ /* block id: 2 */
    int32_t l_11 = 0x0FF68E10L;
    uint8_t *l_12 = &g_13;
    int32_t *l_14 = &g_4[0][3][1];
    int32_t l_17 = 0x7963F6D1L;
    const struct S1 l_18 = {{1UL,-6L,1UL}};
    (*l_14) |= (((*l_12) = ((((void*)0 != &p_8) || (!l_11)) == p_7)) >= 0x00L);
    (*l_14) = (safe_rshift_func_int16_t_s_u(l_17, 8));
    (*l_14) ^= 0x16E31137L;
    return l_18;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_2;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                csmith_sink_ = g_4[i][j][k];
            }
        }
    }
    csmith_sink_ = g_9.f0;
    csmith_sink_ = g_9.f1;
    csmith_sink_ = g_9.f2;
    csmith_sink_ = g_13;
    csmith_sink_ = g_21.f0.f0;
    csmith_sink_ = g_21.f0.f1;
    csmith_sink_ = g_21.f0.f2;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
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

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 6
breakdown:
   depth: 1, occurrence: 6
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 4

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 11
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 20
XXX average alias set size: 1

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 12
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 7

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

