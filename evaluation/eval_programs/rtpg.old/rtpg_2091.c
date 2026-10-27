// RTPG_2091: vars=3 stmts=3
void test_func(void) {
    int sum36 = 9;
    int c73 = 14;
    int hi23 = 72;
    int i;
    for (i = 0; i < 31; i++) {
        c73 = hi23 - sum36;
        sum36 = sum36 + 4;
        c73 = sum36;
    }
}
int main() { test_func(); return 0; }

