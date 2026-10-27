// RTPG_6392: vars=3 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int out43 = 0;
    int x96 = 31958;
    int c59 = 74;
    int i;
    for (i = 0; i < 32; i++) {
        x96 = xn[i];
        out43 = c59 | out43;
        c59 = c59 | c59;
        out43 = x96 ^ c59;
        x96 = x96 + out43;
        out43 = out43 + 1;
        c59 = c59 + 50;
        x96 = c59 & c59;
        out43 = out43 - 3;
        out43 = out43 + 2;
        x96 = x96 ^ c59;
        yo[i] = x96;
    }
}
int main() { test_func(); return 0; }

