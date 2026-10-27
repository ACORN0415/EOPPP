// RTPG_4621: vars=10 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int z8 = 9;
    int hi91 = 42;
    int tmp94 = 54;
    int sum19 = 23;
    int val38 = -1;
    int z21 = -14;
    int x38 = 8;
    int z89 = 8;
    int prev11 = 61204;
    int out62 = 19;
    int *ptr = &sum19;
    int i;
    for (i = 0; i < 16; i++) {
        out62 = xn[i];
        sum19 = val38 - hi91;
        val38 = prev11 - 60;
        hi91 = x38 - tmp94;
        *ptr = *ptr + 4;
        yo[i] = prev11;
    }
}
int main() { test_func(); return 0; }

