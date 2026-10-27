// RTPG_8510: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int hi5 = 38;
    int cur96 = 5;
    int x77 = 76;
    int dat88 = 14;
    int sum50 = 4;
    int *ptr = &x77;
    int i;
    for (i = 0; i < 32; i++) {
        sum50 = xn[i];
        hi5 = sum50 - cur96;
        hi5 = hi5 + hi5;
        cur96 = cur96 - 10;
        *ptr = *ptr + 5;
        yo[i] = hi5;
    }
}
int main() { test_func(); return 0; }

