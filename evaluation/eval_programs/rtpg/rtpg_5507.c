// RTPG_5507: vars=7 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int hi75 = 9;
    int sum24 = 15143;
    int out80 = 87;
    int a41 = 0;
    int hi13 = 43;
    int val52 = -35;
    int tmp85 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out80 = xn[i];
        tmp85 = val52 + 7;
        hi13 = sum24;
        out80 = out80 + 4;
        tmp85 = hi75 - a41;
        a41 = a41 + 1;
        yo[i] = out80;
    }
}
int main() { test_func(); return 0; }

