// RTPG_7343: vars=10 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int prev85 = 5;
    int dat2 = 51837;
    int a80 = 9;
    int y85 = 24504;
    int prev14 = 38;
    int cur51 = 75;
    int lo14 = 0;
    int v29 = 31808;
    int hi56 = 2;
    int x69 = -43;
    int i;
    for (i = 0; i < 16; i++) {
        prev14 = xn[i];
        a80 = a80 + 4;
        dat2 = hi56;
        x69 = x69 - 3;
        prev14 = prev85 - a80;
        cur51 = prev85 + dat2;
        if (lo14 != 53) {
        dat2 = dat2 - 5;
        }
        yo[i] = cur51;
    }
}
int main() { test_func(); return 0; }

