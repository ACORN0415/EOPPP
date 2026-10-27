// RTPG_2807: vars=4 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int lo59 = 0;
    int val47 = 56124;
    int c94 = 30509;
    int tmp40 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        val47 = xn[i];
        lo59 = tmp40 + -4;
        val47 = tmp40 + lo59;
        tmp40 = c94 + lo59;
        val47 = lo59;
        tmp40 = c94;
        lo59 = tmp40 - lo59;
        c94 = tmp40;
        val47 = c94 - val47;
        lo59 = c94 - tmp40;
        lo59 = c94 - 7;
        c94 = c94 + 2;
        if (tmp40 < 87) {
        tmp40 = tmp40 - 2;
        }
        yo[i] = lo59;
    }
}
int main() { test_func(); return 0; }

