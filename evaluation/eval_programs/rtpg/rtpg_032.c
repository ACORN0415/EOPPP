// RTPG_32: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int c63 = 97;
    int tmp34 = -15;
    int cnt26 = 30;
    int acc46 = 21;
    int hi78 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        tmp34 = xn[i];
        acc46 = tmp34 - cnt26;
        cnt26 = hi78;
        yo[i] = c63;
    }
}
int main() { test_func(); return 0; }

