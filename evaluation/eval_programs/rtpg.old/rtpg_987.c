// RTPG_987: vars=3 stmts=5
void test_func(void) {
    int y3 = 61;
    int hi35 = 6;
    int z61 = 39;
    int i;
    for (i = 0; i < 47; i++) {
        y3 = z61 + hi35;
        z61 = z61 / y3;
        hi35 = hi35 - 63271;
        z61 = hi35 & z61;
        hi35 = y3 + 1;
    }
}
int main() { test_func(); return 0; }

