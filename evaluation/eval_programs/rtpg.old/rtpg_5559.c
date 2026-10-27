// RTPG_5559: vars=3 stmts=5
void test_func(void) {
    int hi53 = 98;
    int val95 = 23;
    int prev79 = 5;
    int i;
    for (i = 0; i < 86; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        prev79 = prev79 + hi53;
        val95 = hi53 - prev79;
        hi53 = val95 - 45784;
        hi53 = hi53 - 81;
        val95 = val95 + 1;
        }
    }
}
int main() { test_func(); return 0; }

