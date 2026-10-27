// RTPG_7676: vars=7 stmts=2
void test_func(void) {
    int x71 = 11;
    int y68 = 10;
    int val13 = -13;
    int prev15 = 58;
    int hi53 = 75;
    int prev55 = 6;
    int v28 = 27;
    int i;
    for (i = 0; i < 60; i++) {
        y68 = x71 - prev15;
        prev55 = x71 - 1;
    }
}
int main() { test_func(); return 0; }

