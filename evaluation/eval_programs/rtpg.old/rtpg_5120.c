// RTPG_5120: vars=8 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int y4 = 1556;
    int prev68 = -19;
    int cnt8 = 59;
    int val33 = 60884;
    int v42 = 7;
    int out46 = -25;
    int b64 = 54;
    int out11 = 9;
    int *ptr = &v42;
    int i;
    for (i = 0; i < 16; i++) {
        v42 = xn[i];
        val33 = val33 + 3;
        out46 = val33;
        y4 = prev68 + 9;
        v42 = val33;
        out46 = prev68 - cnt8;
        prev68 = v42 - 71;
        prev68 = b64 - 49980;
        out46 = out11 + -16;
        prev68 = out11 - out11;
        out46 = out11 + 21;
        val33 = y4 + cnt8;
        val33 = prev68 - val33;
        *ptr = *ptr + 4;
        yo[i] = out46;
    }
}
int main() { test_func(); return 0; }

