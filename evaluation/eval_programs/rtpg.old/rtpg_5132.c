// RTPG_5132: vars=7 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int sum14 = 23;
    int hi31 = 35;
    int a15 = -39;
    int out64 = -30;
    int prev26 = -9;
    int a55 = 57848;
    int x6 = 43;
    int i;
    for (i = 0; i < 16; i++) {
        a15 = xn[i];
        hi31 = hi31 + 1;
        out64 = a55 - a15;
        x6 = a55;
        prev26 = out64 - a15;
        x6 = hi31 - -21;
        sum14 = prev26 - 24;
        prev26 = out64 + prev26;
        x6 = out64 - prev26;
        a15 = a15 - 3;
        a15 = a55;
        yo[i] = sum14;
    }
}
int main() { test_func(); return 0; }

