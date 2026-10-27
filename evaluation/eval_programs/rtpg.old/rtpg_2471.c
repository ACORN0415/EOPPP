// RTPG_2471: vars=4 stmts=2
void test_func(void) {
    int cur99 = -28;
    int hi0 = 9840;
    int lo98 = -35;
    int cur52 = 2;
    int i;
    for (i = 0; i < 86; i++) {
        cur52 = hi0 + hi0;
        lo98 = lo98 & lo98;
    }
}
int main() { test_func(); return 0; }

