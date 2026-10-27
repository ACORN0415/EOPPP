// RTPG_4440: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int prev73 = 8;
    int tmp87 = 56;
    int prev25 = 4;
    int lo23 = 42566;
    int *ptr = &tmp87;
    int h0 = 21579;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev73 = xn[i];
        lo23 = tmp87 % prev73;
        lo23 = lo23 - prev73;
        lo23 = prev25 | prev73;
        *ptr = *ptr + 4;
        yo[i] = lo23;
    }
}
int main() { test_func(); return 0; }

