// RTPG_2492: vars=5 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int prev51 = 23;
    int b23 = -31;
    int prev99 = 23;
    int tmp92 = 6;
    int z28 = 10399;
    int i;
    for (i = 0; i < 16; i++) {
        prev99 = xn[i];
        b23 = prev51 - tmp92;
        tmp92 = prev51 + tmp92;
        prev51 = prev51 - 4;
        b23 = b23 - 1;
        prev51 = z28;
        z28 = tmp92 - prev99;
        b23 = z28 + 3;
        prev51 = prev99;
        if (prev51 == -23) {
        tmp92 = tmp92 - 3;
        }
        yo[i] = z28;
    }
}
int main() { test_func(); return 0; }

