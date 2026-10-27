// RTPG_5178: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int hi52 = 8;
    int prev45 = 67;
    int x17 = 65;
    int cur21 = 41;
    int i;
    for (i = 0; i < 16; i++) {
        prev45 = xn[i];
        x17 = prev45 + 8473;
        hi52 = x17 & hi52;
        yo[i] = prev45;
    }
}
int main() { test_func(); return 0; }

