// RTPG_8448: vars=5 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int hi7 = 51359;
    int prev57 = 3;
    int a99 = 8;
    int hi45 = 3;
    int v72 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a99 = xn[i];
        v72 = hi7 - v72;
        hi7 = hi45;
        a99 = a99 - 3;
        hi45 = hi45 + 4;
        a99 = v72 - hi45;
        hi45 = v72 - -14;
        v72 = v72 - 4;
        v72 = a99 - v72;
        a99 = hi7;
        v72 = v72 - 2;
        a99 = hi7;
        yo[i] = prev57;
    }
}
int main() { test_func(); return 0; }

