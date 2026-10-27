// RTPG_5718: vars=3 stmts=4
void test_func(void) {
    int c90 = 10;
    int res15 = 37;
    int z31 = 19;
    int i;
    for (i = 0; i < 81; i++) {
        res15 = res15 + 3;
        res15 = z31;
        c90 = c90 + z31;
        res15 = res15 - 1;
    }
}
int main() { test_func(); return 0; }

