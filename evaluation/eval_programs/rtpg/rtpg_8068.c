// RTPG_8068: vars=7 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int b46 = 35111;
    int val29 = 19532;
    int y59 = 1;
    int cnt93 = 65456;
    int hi69 = 9152;
    int prev90 = -9;
    int val84 = 14;
    int i;
    for (i = 0; i < 64; i++) {
        val84 = xn[i];
        b46 = b46 + 1;
        prev90 = val29 + hi69;
        hi69 = cnt93 + prev90;
        hi69 = prev90 + val84;
        y59 = cnt93 + cnt93;
        cnt93 = cnt93 + 1;
        b46 = b46 + 3;
        prev90 = prev90 - 1;
        b46 = val84;
        if (cnt93 == 43) {
        cnt93 = cnt93 - 2;
        }
        yo[i] = val84;
    }
}
int main() { test_func(); return 0; }

