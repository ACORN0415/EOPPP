// RTPG_2317: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int lo94 = 37277;
    int c13 = -40;
    int c67 = -3;
    int prev59 = 25;
    int tmp80 = 26887;
    int b60 = 5;
    int a82 = 26;
    int i;
    for (i = 0; i < 64; i++) {
        a82 = xn[i];
        b60 = lo94 - prev59;
        a82 = a82 + 1;
        a82 = prev59;
        c13 = c13 + 1;
        b60 = b60;
        yo[i] = b60;
    }
}
int main() { test_func(); return 0; }

