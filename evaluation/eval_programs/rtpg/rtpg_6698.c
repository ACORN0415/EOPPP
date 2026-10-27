// RTPG_6698: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int x71 = 60;
    int x33 = 34;
    int hi95 = -2;
    int cnt99 = -36;
    int i;
    for (i = 0; i < 16; i++) {
        hi95 = xn[i];
        hi95 = hi95 - 37;
        hi95 = x71 - cnt99;
        x33 = cnt99 - x33;
        cnt99 = x71 + cnt99;
        cnt99 = cnt99 - x33;
        x71 = hi95 - cnt99;
        cnt99 = x33 - cnt99;
        cnt99 = cnt99;
        if (hi95 == 17) {
        hi95 = x71 - 1;
        }
        yo[i] = cnt99;
    }
}
int main() { test_func(); return 0; }

