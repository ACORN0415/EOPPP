// RTPG_2434: vars=9 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int z98 = 6;
    int val77 = -16;
    int c66 = -19;
    int acc2 = 10925;
    int val38 = 9571;
    int cnt46 = -18;
    int prev75 = 60;
    int acc35 = 22;
    int v95 = 21;
    int *ptr = &val38;
    int i;
    for (i = 0; i < 16; i++) {
        prev75 = xn[i];
        val77 = z98 - val38;
        val38 = acc35;
        val77 = v95 + c66;
        *ptr = *ptr + 1;
        yo[i] = val38;
    }
}
int main() { test_func(); return 0; }

