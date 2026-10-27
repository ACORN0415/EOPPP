// RTPG_7509: vars=3 stmts=2
void test_func(void) {
    int v22 = 5;
    int acc4 = 50;
    int res86 = 10;
    int i;
    for (i = 0; i < 15; i++) {
        res86 = res86 - 5;
        v22 = v22 - res86;
    }
}
int main() { test_func(); return 0; }

