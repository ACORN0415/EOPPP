// RTPG_6948: vars=4 stmts=7
void test_func(void) {
    int prev92 = 43937;
    int hi27 = 23;
    int prev49 = 0;
    int z1 = 34;
    int i;
    for (i = 0; i < 81; i++) {
        prev92 = prev92 + 5;
        prev49 = hi27 + prev49;
        hi27 = prev49;
        prev49 = z1;
        prev49 = prev49 - 1;
        prev92 = prev92;
        hi27 = prev92;
    }
}
int main() { test_func(); return 0; }

