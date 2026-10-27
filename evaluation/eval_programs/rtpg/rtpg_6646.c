// RTPG_6646: vars=5 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int val40 = 26;
    int val44 = 58310;
    int res90 = 5497;
    int cnt33 = 68;
    int x22 = 32;
    int i;
    for (i = 0; i < 16; i++) {
        val44 = xn[i];
        x22 = x22 - 2;
        res90 = x22 + res90;
        val40 = cnt33 + 8;
        val44 = cnt33 - 10;
        val44 = x22 - 48;
        val44 = val44 + 5;
        cnt33 = cnt33 + 4;
        val44 = val44 - 4;
        yo[i] = val44;
    }
}
int main() { test_func(); return 0; }

