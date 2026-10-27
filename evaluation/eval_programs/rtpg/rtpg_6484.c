// RTPG_6484: vars=3 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int out43 = 0;
    int c59 = 31958;
    int x96 = 74;
    int i;
    for (i = 0; i < 32; i++) {
        c59 = xn[i];
        out43 = x96 | out43;
        out43 = x96 / c59;
        x96 = out43;
        c59 = c59 + out43;
        out43 = out43 + 1;
        x96 = x96 + 50;
        c59 = x96 & c59;
        x96 = c59 + out43;
        out43 = out43 - 57256;
        x96 = c59 + out43;
        yo[i] = x96;
    }
}
int main() { test_func(); return 0; }

