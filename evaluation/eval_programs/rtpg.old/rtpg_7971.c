// RTPG_7971: vars=6 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int a51 = 8;
    int out76 = 29344;
    int a27 = 30;
    int cnt89 = 74;
    int b71 = 36059;
    int hi42 = 40999;
    int *ptr = &a27;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 29;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b71 = xn[i];
        a51 = hi42 + b71;
        cnt89 = cnt89 - 4;
        out76 = hi42 - 0;
        cnt89 = b71 * 35553;
        cnt89 = hi42 * 11866;
        b71 = a27 - out76;
        cnt89 = cnt89 - 1;
        out76 = cnt89 - out76;
        a27 = a51 * 11;
        out76 = hi42 - out76;
        b71 = out76 + a27;
        a27 = a27 - 2;
        *ptr = *ptr + 5;
        yo[i] = a27;
    }
}
int main() { test_func(); return 0; }

