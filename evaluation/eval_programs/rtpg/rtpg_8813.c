// RTPG_8813: vars=4 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int prev73 = 2100;
    int y3 = -35;
    int lo51 = 35;
    int sum69 = 99;
    int *ptr = &y3;
    int i;
    for (i = 0; i < 32; i++) {
        prev73 = xn[i];
        lo51 = y3 + 20024;
        sum69 = lo51 + sum69;
        *ptr = *ptr + 2;
        if (y3 > 31) {
        prev73 = sum69 - prev73;
        }
        yo[i] = sum69;
    }
}
int main() { test_func(); return 0; }

