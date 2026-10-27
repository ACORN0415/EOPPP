// RTPG_3075: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int dat86 = 8;
    int y32 = 84;
    int cur76 = 4;
    int cnt78 = 3;
    int a42 = 5;
    int x34 = 19;
    int tmp47 = 6;
    int h0 = 76;
    int sv0 = 0;
    int h1 = 75;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        tmp47 = xn[i];
        y32 = y32 + 4;
        y32 = x34 * 0;
        x34 = x34 - 5;
        x34 = a42 * 8;
        cur76 = cur76 - 5;
        if (cur76 == 5) {
        x34 = x34 + a42;
        }
        yo[i] = y32;
    }
}
int main() { test_func(); return 0; }

