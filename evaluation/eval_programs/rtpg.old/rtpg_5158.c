// RTPG_5158: vars=3 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int y35 = 43;
    int sum99 = 60;
    int c3 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        y35 = xn[i];
        y35 = c3 - 86;
        y35 = sum99 + 0;
        c3 = sum99;
        c3 = c3 + 4;
        sum99 = sum99 - y35;
        c3 = sum99 + 38;
        yo[i] = y35;
    }
}
int main() { test_func(); return 0; }

