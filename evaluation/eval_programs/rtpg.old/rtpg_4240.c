// RTPG_4240: vars=5 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int dat15 = 64;
    int dat89 = 2;
    int cur41 = 9;
    int a23 = -10;
    int z12 = 47;
    int i;
    for (i = 0; i < 32; i++) {
        cur41 = xn[i];
        dat89 = dat15;
        a23 = a23 + 4;
        cur41 = dat15;
        z12 = z12 - 1;
        dat15 = dat15;
        cur41 = z12 - dat15;
        z12 = a23 - 2;
        dat89 = a23 - dat89;
        z12 = z12 - 2;
        yo[i] = a23;
    }
}
int main() { test_func(); return 0; }

