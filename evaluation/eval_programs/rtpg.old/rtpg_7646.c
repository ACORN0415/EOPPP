// RTPG_7646: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int acc54 = 12147;
    int b43 = 91;
    int v39 = 51189;
    int out61 = 60;
    int *ptr = &v39;
    int i;
    for (i = 0; i < 16; i++) {
        acc54 = xn[i];
        acc54 = v39 - 22342;
        b43 = b43 + 1;
        v39 = b43 + 93;
        out61 = b43 - out61;
        *ptr = *ptr + 1;
        yo[i] = b43;
    }
}
int main() { test_func(); return 0; }

