// RTPG_6: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int v55 = 44425;
    int out92 = 94;
    int a83 = 86;
    int i;
    for (i = 0; i < 64; i++) {
        v55 = xn[i];
        a83 = v55 + a83;
        v55 = v55 + out92;
        a83 = a83 - a83;
        if (v55 >= 40) {
        a83 = a83 - v55;
        }
        yo[i] = a83;
    }
}
int main() { test_func(); return 0; }

