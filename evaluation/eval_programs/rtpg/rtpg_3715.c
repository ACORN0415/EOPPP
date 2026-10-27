// RTPG_3715: vars=9 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int tmp0 = 41;
    int dat91 = 14;
    int dat62 = 3;
    int y69 = -32;
    int sum35 = -5;
    int acc67 = 10;
    int res64 = -28;
    int lo52 = -39;
    int val34 = 1;
    int *ptr = &dat62;
    int i;
    for (i = 0; i < 64; i++) {
        val34 = xn[i];
        dat91 = lo52 - dat62;
        sum35 = dat62 - dat91;
        *ptr = *ptr + 2;
        yo[i] = acc67;
    }
}
int main() { test_func(); return 0; }

