// RTPG_2451: vars=4 stmts=2
void test_func(void) {
    int hi0 = -28;
    int cur99 = 9840;
    int lo98 = -35;
    int cur52 = 2;
    int i;
    for (i = 0; i < 86; i++) {
        cur52 = cur99 + cur99;
        lo98 = lo98 & cur99;
    }
}
int main() { test_func(); return 0; }

