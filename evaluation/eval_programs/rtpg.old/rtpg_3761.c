// RTPG_3761: vars=4 stmts=5
void test_func(void) {
    int z5 = 4;
    int a27 = 43068;
    int c55 = 43;
    int sum36 = 8;
    int i;
    for (i = 0; i < 65; i++) {
        sum36 = sum36 + a27;
        a27 = a27 + 3;
        c55 = c55 + 3;
        c55 = c55 + 4;
        c55 = c55 - sum36;
    }
}
int main() { test_func(); return 0; }

