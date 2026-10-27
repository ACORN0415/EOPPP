// RTPG_1497: vars=3 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int out3 = 63;
    int res48 = 14;
    int y89 = -38;
    int i;
    for (i = 0; i < 64; i++) {
        res48 = xn[i];
        out3 = y89 - out3;
        y89 = out3 - res48;
        res48 = out3 - -32;
        y89 = y89 - 9919;
        out3 = out3 - 3;
        res48 = y89 - res48;
        res48 = y89 + 7;
        res48 = y89 | y89;
        if (out3 != -35) {
        res48 = out3;
        }
        yo[i] = res48;
    }
}
int main() { test_func(); return 0; }

