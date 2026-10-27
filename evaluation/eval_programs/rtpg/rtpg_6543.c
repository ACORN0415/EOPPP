// RTPG_6543: vars=6 stmts=3
void test_func(void) {
    int hi5 = 7;
    int dat21 = 31383;
    int v15 = -33;
    int lo49 = 16603;
    int b24 = 8;
    int acc11 = 50517;
    int *ptr = &hi5;
    int i;
    for (i = 0; i < 8; i++) {
        hi5 = dat21 - 16187;
        v15 = v15 - hi5;
        acc11 = v15 + acc11;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

