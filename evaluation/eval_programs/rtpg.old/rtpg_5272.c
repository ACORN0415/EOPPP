// RTPG_5272: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int cur43 = 5;
    int cnt17 = 28382;
    int z51 = 61678;
    int v88 = 50;
    int prev29 = 45;
    int h0 = 45;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        prev29 = xn[i];
        cur43 = prev29 - z51;
        z51 = z51 + v88;
        z51 = v88;
        z51 = z51 * 50;
        prev29 = cnt17 * 8;
        cnt17 = cnt17 * 60031;
        v88 = prev29 * 2117;
        z51 = z51 - 1;
        yo[i] = v88;
    }
}
int main() { test_func(); return 0; }

