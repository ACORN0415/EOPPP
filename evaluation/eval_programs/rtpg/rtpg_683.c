// RTPG_683: vars=3 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int res8 = 47209;
    int v8 = 13;
    int x4 = 9;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        res8 = xn[i];
        res8 = v8 - -46;
        res8 = x4 - v8;
        res8 = x4 - res8;
        res8 = v8 + x4;
        x4 = res8 - 26;
        v8 = res8 * 4;
        v8 = v8 + res8;
        v8 = x4 + 76;
        v8 = v8 * 12;
        res8 = res8 + 5;
        res8 = res8 - 4;
        yo[i] = x4;
    }
}
int main() { test_func(); return 0; }

