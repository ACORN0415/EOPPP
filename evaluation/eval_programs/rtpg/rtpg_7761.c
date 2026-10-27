// RTPG_7761: vars=10 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int a51 = 0;
    int res66 = 4;
    int z20 = 62;
    int prev69 = 6;
    int a31 = -2;
    int prev27 = 22474;
    int acc68 = 4998;
    int a43 = 5371;
    int hi59 = 32510;
    int tmp44 = 44;
    int i;
    for (i = 0; i < 64; i++) {
        prev27 = xn[i];
        a51 = a51 + 5;
        hi59 = hi59 - 4;
        a31 = a31 - 5;
        tmp44 = res66 + a43;
        prev27 = a43 - 18;
        yo[i] = a31;
    }
}
int main() { test_func(); return 0; }

