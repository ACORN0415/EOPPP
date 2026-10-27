// RTPG_5117: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int cur21 = 8;
    int prev45 = 67;
    int hi52 = 65;
    int x17 = 41;
    int i;
    for (i = 0; i < 16; i++) {
        prev45 = xn[i];
        hi52 = prev45 + 8473;
        cur21 = hi52 & prev45;
        yo[i] = prev45;
    }
}
int main() { test_func(); return 0; }

