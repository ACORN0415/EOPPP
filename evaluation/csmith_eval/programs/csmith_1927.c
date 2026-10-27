/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --seed 170662645 --no-checksum --no-argc --no-volatiles --max-funcs 2 --max-block-depth 3 --max-expr-complexity 4
 * Seed:      170662645
 */

#include "csmith.h"

volatile uint64_t csmith_sink_ = 0;

static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   int32_t  f0;
   int16_t  f1;
};

union U2 {
   struct S1  f0;
   uint32_t  f1;
   const int32_t  f2;
};

union U3 {
   unsigned f0 : 5;
   const uint32_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int8_t g_7 = 8L;
static int32_t g_9 = 6L;
static uint8_t g_21 = 0xD4L;
static struct S1 g_33[6] = {{0x6FA7ABE3L,0L},{1L,-1L},{0x6FA7ABE3L,0L},{0x6FA7ABE3L,0L},{1L,-1L},{0x6FA7ABE3L,0L}};
static int32_t *g_47 = (void*)0;
static union U3 g_48 = {4294967295UL};


/* --- FORWARD DECLARATIONS --- */
static union U3  func_1(void);
static int32_t * func_2(union U2  p_3, int32_t  p_4, const int8_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_9 g_21 g_33 g_48
 * writes: g_7 g_9 g_21 g_33.f1 g_47 g_33
 */
static union U3  func_1(void)
{ /* block id: 0 */
    union U2 l_6 = {{0xA3A92BD4L,-1L}};
    g_47 = func_2(l_6, g_7, ((((g_7 ^ l_6.f0.f1) , 4L) < 65533UL) , 1L));
    g_33[0] = g_33[2];
    return g_48;
}


/* ------------------------------------------ */
/* 
 * reads : g_9 g_21 g_33 g_7
 * writes: g_7 g_9 g_21 g_33.f1
 */
static int32_t * func_2(union U2  p_3, int32_t  p_4, const int8_t  p_5)
{ /* block id: 1 */
    int32_t *l_8[1][8] = {{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9}};
    int32_t *l_10 = &g_9;
    int16_t *l_45 = &g_33[2].f1;
    int32_t *l_46 = &g_9;
    int i, j;
    if (((p_3.f0.f0 ^ (((l_8[0][4] != (void*)0) , (void*)0) == l_10)) | g_9))
    { /* block id: 2 */
        for (p_3.f0.f1 = 28; (p_3.f0.f1 == (-14)); --p_3.f0.f1)
        { /* block id: 5 */
            int32_t *l_13 = &g_9;
            int8_t *l_16 = (void*)0;
            int8_t *l_17 = (void*)0;
            int8_t *l_18 = &g_7;
            (*l_10) = (((l_13 != &p_4) && ((safe_rshift_func_uint8_t_u_u((((*l_18) = 0x75L) & 247UL), (*l_13))) | g_9)) >= g_9);
        }
    }
    else
    { /* block id: 9 */
        int32_t **l_19 = (void*)0;
        int32_t **l_20 = &l_8[0][4];
        uint64_t l_29 = 0x8E20B4584502E46ALL;
        int64_t l_34[6] = {0x5E7E8EE72C95C8F3LL,0x5E7E8EE72C95C8F3LL,0x5E7E8EE72C95C8F3LL,0x5E7E8EE72C95C8F3LL,0x5E7E8EE72C95C8F3LL,0x5E7E8EE72C95C8F3LL};
        int i;
        (*l_20) = &p_4;
        g_21++;
        p_4 = (~((((safe_lshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s((l_29 <= (+(safe_add_func_uint32_t_u_u((*l_10), (((((g_33[2] , (-7L)) < (**l_20)) < g_33[2].f0) >= g_33[2].f0) & 0x90L))))), 0x4A037A762AFEDDD8LL)) | l_34[2]), g_9)) ^ p_3.f0.f1) & g_33[2].f1) != g_7));
        (*l_20) = &p_4;
    }
    (*l_10) |= (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_7, (~((safe_mod_func_int16_t_s_s(2L, (~((safe_mod_func_int16_t_s_s(((*l_45) = p_3.f0.f1), g_21)) | g_7)))) <= 0x13D0L)))), p_5));
    return l_46;
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    func_1();
    csmith_sink_ = g_7;
    csmith_sink_ = g_9;
    csmith_sink_ = g_21;
    for (i = 0; i < 6; i++)
    {

    }
    csmith_sink_ = g_48.f0;
    platform_main_end(0,0);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 11
   depth: 1, occurrence: 1
XXX total union variables: 2

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

XXX max expression depth: 14
breakdown:
   depth: 1, occurrence: 14
   depth: 2, occurrence: 1
   depth: 6, occurrence: 1
   depth: 8, occurrence: 3
   depth: 14, occurrence: 1

XXX total number of pointers: 12

XXX times a variable address is taken: 13
XXX times a pointer is dereferenced on RHS: 3
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1
XXX times a pointer is dereferenced on LHS: 6
breakdown:
   depth: 1, occurrence: 6
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 1
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 36

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 9
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 10
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1.08

XXX times a non-volatile is read: 36
XXX times a non-volatile is write: 17
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 12
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 27.3
XXX percentage an existing variable is used: 72.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

