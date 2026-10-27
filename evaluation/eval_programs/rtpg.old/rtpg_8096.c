// RTPG_8096: vars=7 stmts=4
void test_func(void) {
    int a35 = 47876;
    int c54 = 59;
    int res34 = 6;
    int a10 = 9;
    int z89 = 49753;
    int res4 = 94;
    int res97 = 23;
    int *ptr = &a10;
    int i;
    for (i = 0; i < 14; i++) {
        c54 = a35;
        a10 = res4 + a10;
        a10 = a10 - 3;
        res34 = res4 + res97;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

