// RTPG_8341: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int z75 = 34160;
    int tmp33 = 41846;
    int acc4 = 38755;
    int x94 = 40655;
    int cnt37 = 60;
    int i;
    for (i = 0; i < 32; i++) {
        acc4 = xn[i];
        z75 = acc4 - -10;
        z75 = acc4;
        z75 = z75 - 5;
        x94 = x94 - 4;
        x94 = x94 - 5;
        cnt37 = z75 - tmp33;
        x94 = x94 - acc4;
        z75 = acc4 - cnt37;
        yo[i] = tmp33;
    }
}
int main() { test_func(); return 0; }

