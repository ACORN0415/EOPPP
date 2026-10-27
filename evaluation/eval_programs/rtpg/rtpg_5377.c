// RTPG_5377: vars=6 stmts=2
void test_func(void) {
    int res4 = 8;
    int c71 = 36;
    int z69 = 8;
    int val94 = 20;
    int val52 = -25;
    int prev93 = -35;
    int i;
    for (i = 0; i < 39; i++) {
        prev93 = c71;
        c71 = prev93;
    }
}
int main() { test_func(); return 0; }

