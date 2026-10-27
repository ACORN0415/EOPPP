// RTPG_8947: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int acc92 = 5;
    int cnt82 = 37;
    int res67 = -24;
    int cur58 = 53;
    int i;
    for (i = 0; i < 32; i++) {
        res67 = xn[i];
        cnt82 = cnt82 + res67;
        cur58 = cur58 - 1;
        res67 = res67;
        cur58 = cur58 - 1;
        cur58 = cnt82 - res67;
        if (cur58 != 29) {
        cnt82 = cnt82 + 2;
        }
        yo[i] = cnt82;
    }
}
int main() { test_func(); return 0; }

