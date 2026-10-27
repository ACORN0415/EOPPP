// RTPG_8137: vars=3 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int val46 = 25935;
    int hi58 = 25997;
    int b29 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        hi58 = xn[i];
        hi58 = b29 + hi58;
        hi58 = hi58 + 7749;
        val46 = hi58 - 24;
        b29 = hi58;
        val46 = hi58;
        val46 = val46 - 5;
        yo[i] = hi58;
    }
}
int main() { test_func(); return 0; }

