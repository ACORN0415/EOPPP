// RTPG_4140: vars=10 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int cnt73 = 4;
    int acc3 = 2;
    int a61 = 45706;
    int cur44 = 93;
    int y29 = 18;
    int acc95 = 35;
    int a27 = 72;
    int c9 = 100;
    int tmp93 = -9;
    int c20 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc95 = xn[i];
        acc95 = acc95 ^ a27;
        a27 = cnt73 / cur44;
        cur44 = a27 + tmp93;
        acc3 = acc3 % a61;
        y29 = y29 % a61;
        tmp93 = tmp93 + 4;
        c9 = cnt73 & acc3;
        y29 = acc3 + tmp93;
        if (acc3 > -10) {
        y29 = y29 + 1;
        }
        yo[i] = a27;
    }
}
int main() { test_func(); return 0; }

