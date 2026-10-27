/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-structs --no-unions --no-volatiles --no-const-pointers --max-funcs 1 -o /tmp/csmith_0713.c
 * Seed:      217557129
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0xA0256915L;
static int64_t g_8 = (-5L);
static int64_t g_10[8] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
static int32_t g_13 = 9L;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_13
 * writes: g_8 g_10 g_13 g_3
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t **l_4 = &l_2;
    int64_t *l_7 = &g_8;
    int64_t *l_9 = &g_10[2];
    int32_t *l_11 = (void*)0;
    int32_t *l_12 = &g_13;
    (*l_4) = l_2;
    (**l_4) = ((*l_12) ^= (18446744073709551615UL <= ((*l_9) = ((*l_7) = (safe_lshift_func_int8_t_s_u(g_3, 6))))));
    return g_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_13, "g_13", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

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
   depth: 1, occurrence: 4
   depth: 6, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 9

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 8
   level: 2, occurrence: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 11
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

