// RTPG_4423: vars=5 stmts=4
void test_func(void) {
    int c55 = -1;
    int z82 = 656;
    int z28 = 14870;
    int prev93 = 20;
    int dat72 = 6;
    int i;
    for (i = 0; i < 89; i++) {
        dat72 = c55 - 2;
        c55 = c55 - 1;
        c55 = c55 + 5;
        prev93 = prev93 + 5;
    }
}
int main() { test_func(); return 0; }

