// RTPG_7486: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    float dat48 = 19.92;
    int val21 = 42953;
    int y65 = 7;
    int cur61 = 5;
    int v19 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur61 = xn[i];
        dat48 = val21 | cur61;
        dat48 = dat48 - 4;
        y65 = val21 % v19;
        val21 = val21 + y65;
        val21 = v19 & val21;
        yo[i] = y65;
    }
}
int main() { test_func(); return 0; }

