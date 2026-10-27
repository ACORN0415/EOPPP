// RTPG_7727: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int acc54 = 12147;
    int v39 = 91;
    int out61 = 51189;
    int b43 = 60;
    int *ptr = &out61;
    int i;
    for (i = 0; i < 16; i++) {
        acc54 = xn[i];
        acc54 = out61 - 22342;
        v39 = v39 + 1;
        out61 = v39 + 93;
        b43 = v39 - b43;
        *ptr = *ptr + 1;
        yo[i] = v39;
    }
}
int main() { test_func(); return 0; }

