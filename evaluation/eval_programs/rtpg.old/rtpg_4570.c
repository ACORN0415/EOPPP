// RTPG_4570: vars=10 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int hi91 = 9;
    int out62 = 42;
    int prev11 = 54;
    int x38 = 23;
    int tmp94 = -1;
    int val38 = -14;
    int z89 = 8;
    int z21 = 8;
    int sum19 = 61204;
    int z8 = 19;
    int *ptr = &x38;
    int i;
    for (i = 0; i < 16; i++) {
        z8 = xn[i];
        x38 = tmp94 - out62;
        tmp94 = sum19 - 60;
        out62 = z89 - prev11;
        *ptr = *ptr + 4;
        yo[i] = sum19;
    }
}
int main() { test_func(); return 0; }

