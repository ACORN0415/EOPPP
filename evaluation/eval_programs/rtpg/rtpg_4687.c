// RTPG_4687: vars=10 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int b39 = -48;
    int res26 = 37;
    int dat11 = 2;
    int x0 = 7;
    int c21 = -48;
    int acc66 = 6;
    int cnt76 = 38462;
    int dat73 = 50097;
    int cur88 = 23;
    int b84 = 96;
    int i;
    for (i = 0; i < 32; i++) {
        acc66 = xn[i];
        dat11 = dat11 + 2;
        c21 = acc66 + -31;
        b39 = dat11 + 45;
        yo[i] = cur88;
    }
}
int main() { test_func(); return 0; }

