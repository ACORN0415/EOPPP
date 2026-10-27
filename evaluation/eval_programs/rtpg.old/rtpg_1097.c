// RTPG_1097: vars=7 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int val30 = 53080;
    int y70 = 9;
    int val98 = -46;
    int prev89 = 5303;
    int cnt94 = 57;
    int val20 = 0;
    int res59 = 36;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 16;
    int sv1 = 0;
    int h2 = 5;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        val98 = xn[i];
        res59 = y70 - prev89;
        val30 = val30 * 21;
        y70 = val20 * -48;
        val30 = y70 * 54;
        val98 = val98 + 36;
        val98 = prev89 - val20;
        val98 = val98 + 1;
        y70 = prev89 * 74;
        y70 = prev89 * 3;
        prev89 = res59;
        val30 = val30 - res59;
        res59 = res59 + res59;
        yo[i] = res59;
    }
}
int main() { test_func(); return 0; }

