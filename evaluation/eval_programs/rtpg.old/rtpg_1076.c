// RTPG_1076: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int a49 = 71;
    int v39 = -24;
    int b27 = 3;
    int res74 = -20;
    int i;
    for (i = 0; i < 64; i++) {
        b27 = xn[i];
        res74 = res74 - 4;
        res74 = b27 + 8;
        a49 = a49 + b27;
        v39 = res74 - 0;
        b27 = res74 + a49;
        v39 = v39 + a49;
        a49 = b27 - v39;
        if (a49 != 15) {
        v39 = a49 + v39;
        }
        yo[i] = b27;
    }
}
int main() { test_func(); return 0; }

