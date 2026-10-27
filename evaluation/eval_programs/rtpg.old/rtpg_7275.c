// RTPG_7275: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int cnt91 = 21;
    int val15 = 1;
    int a64 = 50065;
    int res26 = 9;
    int dat55 = 43;
    int i;
    for (i = 0; i < 64; i++) {
        res26 = xn[i];
        cnt91 = cnt91 - 1;
        a64 = a64 - 2;
        cnt91 = a64;
        cnt91 = res26 - 47;
        yo[i] = cnt91;
    }
}
int main() { test_func(); return 0; }

