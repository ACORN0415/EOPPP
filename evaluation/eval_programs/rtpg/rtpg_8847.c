// RTPG_8847: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int hi46 = 5958;
    int z67 = 47197;
    int cur90 = 0;
    int tmp42 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        hi46 = xn[i];
        tmp42 = z67 - hi46;
        tmp42 = tmp42 + hi46;
        cur90 = hi46 - z67;
        cur90 = tmp42 - 40;
        hi46 = hi46 - 4;
        yo[i] = z67;
    }
}
int main() { test_func(); return 0; }

