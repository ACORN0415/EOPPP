// RTPG_7512: vars=8 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int acc4 = 35;
    int b15 = 10;
    int x64 = 27231;
    int acc96 = 7;
    int prev29 = 48;
    int c78 = 7;
    int sum28 = -35;
    int prev97 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        prev97 = xn[i];
        acc4 = prev29 + x64;
        x64 = x64 + 1;
        prev29 = acc4 + b15;
        x64 = sum28;
        acc4 = sum28 - c78;
        acc96 = c78 + -10;
        if (sum28 < 3) {
        acc4 = sum28 - x64;
        }
        yo[i] = prev29;
    }
}
int main() { test_func(); return 0; }

