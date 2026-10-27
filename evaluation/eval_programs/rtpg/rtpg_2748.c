// RTPG_2748: vars=8 stmts=5
void test_func(void) {
    int prev62 = -42;
    int res87 = 1;
    int val23 = 56121;
    int prev78 = 6;
    int hi38 = -3;
    int cur93 = 38;
    int x21 = 9;
    int acc35 = 35;
    int i;
    for (i = 0; i < 62; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        acc35 = val23;
        val23 = res87;
        acc35 = x21 - 4;
        x21 = acc35;
        hi38 = hi38 + x21;
        }
    }
}
int main() { test_func(); return 0; }

