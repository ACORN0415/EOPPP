// RTPG_4323: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int lo43 = 8208;
    int cur37 = -5;
    int hi61 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        lo43 = xn[i];
        hi61 = hi61;
        lo43 = lo43 + hi61;
        if (hi61 > 10) goto done;
        yo[i] = cur37;
    }
done:
    hi61 = 0;
}
int main() { test_func(); return 0; }

