// RTPG_8067: vars=6 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int a51 = 8;
    int cnt89 = 29344;
    int out76 = 30;
    int b71 = 74;
    int a27 = 36059;
    int hi42 = 40999;
    int *ptr = &out76;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 29;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        a27 = xn[i];
        a51 = hi42 + a27;
        b71 = b71 - 4;
        cnt89 = hi42 - 0;
        b71 = a27 * 35553;
        b71 = hi42 * 11866;
        a27 = out76 - cnt89;
        b71 = b71 - 1;
        cnt89 = b71 - cnt89;
        out76 = a51 * 11;
        cnt89 = hi42 - cnt89;
        a27 = cnt89 + out76;
        out76 = out76 - 2;
        *ptr = *ptr + 5;
        yo[i] = out76;
    }
}
int main() { test_func(); return 0; }

