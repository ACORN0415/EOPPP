// RTPG_5553: vars=8 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int x89 = 63801;
    int tmp66 = 3999;
    int c8 = 40;
    int a13 = 70;
    int val38 = 21;
    int sum30 = 7;
    int cnt39 = 56802;
    int z89 = 53105;
    int *ptr = &tmp66;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 10560;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z89 = xn[i];
        x89 = x89 + z89;
        z89 = z89 + 5;
        c8 = tmp66 + -26;
        *ptr = *ptr + 3;
        if (c8 < 98) {
        a13 = tmp66 + cnt39;
        }
        yo[i] = val38;
    }
}
int main() { test_func(); return 0; }

