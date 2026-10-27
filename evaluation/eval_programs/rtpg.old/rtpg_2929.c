// RTPG_2929: vars=8 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int hi63 = 18796;
    int out52 = 11647;
    int prev59 = 10;
    int c70 = 9;
    int out4 = 6;
    int z71 = 10;
    int tmp62 = 10;
    int cnt22 = 5;
    int i;
    for (i = 0; i < 32; i++) {
        hi63 = xn[i];
        c70 = z71 / z71;
        tmp62 = out52;
        out4 = c70 - c70;
        prev59 = out4 / c70;
        z71 = tmp62;
        tmp62 = hi63 + out4;
        out52 = c70 & z71;
        cnt22 = tmp62 & out4;
        yo[i] = hi63;
    }
}
int main() { test_func(); return 0; }

