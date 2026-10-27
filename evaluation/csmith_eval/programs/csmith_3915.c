/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 203187420 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      203187420
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
   unsigned f1 : 24;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   uint32_t  f1;
   struct S1  f2;
};
#pragma pack(pop)

union U3 {
   uint32_t  f0;
   uint64_t  f1;
   unsigned f2 : 27;
   int8_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int8_t g_10[4] = {1L,1L,1L,1L};
static int32_t g_14 = 0xB058EFA9L;
static uint8_t g_16 = 1UL;
static int16_t g_18 = 8L;
static struct S2 g_33 = {-4L,1UL,{5UL,3163}};
static union U3 g_34 = {0xDCF28D0DL};


/* --- FORWARD DECLARATIONS --- */
static union U3  func_1(void);
static struct S2  func_2(uint8_t  p_3, int8_t  p_4, int32_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_14 g_16 g_34
 * writes: g_10 g_16 g_18 g_14 g_33
 */
static union U3  func_1(void)
{ /* block id: 0 */
    uint8_t l_8 = 5UL;
    int8_t *l_9 = &g_10[3];
    int32_t l_13 = 1L;
    uint8_t *l_15 = &g_16;
    int16_t *l_17 = &g_18;
    struct S2 *l_32 = &g_33;
    (*l_32) = func_2((((((((*l_17) = (safe_mul_func_int8_t_s_s(((*l_9) = l_8), ((((safe_mul_func_uint8_t_u_u(((*l_15) = ((l_13 ^= l_8) >= ((g_14 > l_8) | l_8))), 0L)) , g_14) == 65535UL) , 0UL)))) >= g_14) , l_13) ^ g_14) <= 1L) && l_13), g_14, l_8);
    return g_34;
}


/* ------------------------------------------ */
/* 
 * reads : g_16 g_14
 * writes: g_16 g_14
 */
static struct S2  func_2(uint8_t  p_3, int8_t  p_4, int32_t  p_5)
{ /* block id: 5 */
    struct S2 l_31 = {-10L,0x862EAE26L,{65526UL,2361}};
    for (p_3 = 4; (p_3 < 15); p_3 = safe_add_func_int8_t_s_s(p_3, 2))
    { /* block id: 8 */
        int16_t l_27 = 0x4484L;
        int32_t *l_28 = (void*)0;
        int32_t *l_29 = &g_14;
        struct S2 l_30 = {0xBD47CDD5L,0x76E30F4AL,{0UL,1378}};
        (*l_29) &= ((safe_div_func_uint64_t_u_u((((safe_add_func_int16_t_s_s(0xE7EAL, (safe_mul_func_uint8_t_u_u((g_16 ^= ((&g_16 == (void*)0) & 0x16971DB95674643ALL)), l_27)))) , p_4) > 0UL), 0x6AC39B398EF544BDLL)) != l_27);
        return l_30;
    }
    return l_31;
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    for (i = 0; i < 4; i++)
    {
        csmith_sink_ = g_10[i];
    }
    csmith_sink_ = g_14;
    csmith_sink_ = g_16;
    csmith_sink_ = g_18;
    csmith_sink_ = g_33.f0;
    csmith_sink_ = g_33.f1;
    csmith_sink_ = g_33.f2.f0;
    csmith_sink_ = g_33.f2.f1;
    csmith_sink_ = g_34.f0;
    csmith_sink_ = g_34.f2;
    csmith_sink_ = g_34.f3;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 0
   depth: 2, occurrence: 2
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 3
breakdown:
   indirect level: 0, occurrence: 3
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 3
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 21
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1
   depth: 10, occurrence: 1
   depth: 21, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 5
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1

XXX times a non-volatile is read: 19
XXX times a non-volatile is write: 13
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

