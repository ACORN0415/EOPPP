// RTPG_7444: vars=4 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    float cur26 = 52.65;
    int acc30 = 6;
    int c56 = 2;
    int out31 = 12;
    int i;
    for (i = 0; i < 32; i++) {
        out31 = xn[i];
        out31 = out31 - 4;
        c56 = c56 - 5;
        cur26 = acc30 | c56;
        acc30 = acc30 + acc30;
        acc30 = cur26 + out31;
        c56 = cur26 - 13;
        c56 = c56 - 1;
        if (out31 == -8) {
        cur26 = cur26 + c56;
        }
        yo[i] = out31;
    }
}
int main() { test_func(); return 0; }

