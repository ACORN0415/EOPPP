// RTPG_5181: vars=8 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int out11 = 1556;
    int out46 = -19;
    int b64 = 59;
    int val33 = 60884;
    int v42 = 7;
    int cnt8 = -25;
    int y4 = 54;
    int prev68 = 9;
    int *ptr = &v42;
    int i;
    for (i = 0; i < 16; i++) {
        v42 = xn[i];
        val33 = val33 + 3;
        cnt8 = val33;
        out11 = out46 + 9;
        v42 = val33;
        cnt8 = out46 - b64;
        out46 = v42 - 71;
        out46 = y4 - 49980;
        cnt8 = prev68 + -16;
        out46 = prev68 - prev68;
        cnt8 = prev68 + 21;
        val33 = out11 + b64;
        val33 = out46 - val33;
        *ptr = *ptr + 4;
        yo[i] = cnt8;
    }
}
int main() { test_func(); return 0; }

