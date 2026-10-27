// RTPG_5875: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int dat38 = 26424;
    int lo51 = 3;
    int v55 = -30;
    int tmp37 = 21576;
    int prev81 = 6;
    int out70 = 61160;
    int c76 = 42;
    int a22 = 16;
    int tmp56 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        v55 = xn[i];
        lo51 = dat38 - 8;
        c76 = out70 - a22;
        prev81 = tmp56 + out70;
        prev81 = a22 & v55;
        c76 = lo51;
        if (lo51 != -27) {
        tmp37 = tmp56 - a22;
        }
        yo[i] = v55;
    }
}
int main() { test_func(); return 0; }

