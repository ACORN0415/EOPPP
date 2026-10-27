// RTPG_7972: vars=7 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int b46 = 35111;
    int y59 = 19532;
    int hi69 = 1;
    int val29 = 65456;
    int prev90 = 9152;
    int val84 = -9;
    int cnt93 = 14;
    int i;
    for (i = 0; i < 64; i++) {
        cnt93 = xn[i];
        b46 = b46 + 1;
        val84 = y59 + prev90;
        prev90 = val29 + val84;
        prev90 = val84 + cnt93;
        hi69 = val29 + val29;
        val29 = val29 + 1;
        b46 = b46 + 3;
        val84 = val84 - 1;
        b46 = cnt93;
        if (val29 == 43) {
        val29 = val29 - 2;
        }
        yo[i] = cnt93;
    }
}
int main() { test_func(); return 0; }

