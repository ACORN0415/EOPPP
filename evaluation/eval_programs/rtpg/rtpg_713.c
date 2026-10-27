// RTPG_713: vars=4 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int acc22 = 6;
    int res71 = 24;
    int res27 = 9;
    int res48 = 44865;
    int i;
    for (i = 0; i < 22; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        res71 = res71 + 4;
        res48 = res71 - -43;
        res48 = res48 + 5;
        res48 = res71 - 4;
        res48 = res48;
        res27 = acc22 + res48;
        }
    }
}
int main() { test_func(); return 0; }

