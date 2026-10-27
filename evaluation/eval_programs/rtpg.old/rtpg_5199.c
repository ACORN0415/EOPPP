// RTPG_5199: vars=5 stmts=7
void test_func(void) {
    int cur42 = 38;
    int res7 = 14866;
    int prev33 = 3131;
    int val12 = -45;
    int a30 = -33;
    int i;
    for (i = 0; i < 20; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        prev33 = res7;
        res7 = a30 - val12;
        a30 = prev33 - res7;
        res7 = res7 - 4;
        val12 = cur42 - cur42;
        a30 = res7 + 1;
        val12 = prev33 - 16;
        }
    }
}
int main() { test_func(); return 0; }

