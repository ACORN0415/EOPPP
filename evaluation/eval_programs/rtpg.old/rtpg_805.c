// RTPG_805: vars=4 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int b10 = 4;
    int b94 = 24404;
    int res28 = 16;
    int acc77 = 46394;
    int i;
    for (i = 0; i < 32; i++) {
        acc77 = xn[i];
        b94 = b94 & b94;
        b94 = acc77 & acc77;
        res28 = b94 - acc77;
        res28 = b94 ^ acc77;
        b10 = b10 - acc77;
        res28 = res28 & res28;
        yo[i] = b10;
    }
}
int main() { test_func(); return 0; }

