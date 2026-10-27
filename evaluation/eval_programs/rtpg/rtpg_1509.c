// RTPG_1509: vars=34 stmts=4
int test_func(int x) {
    if (x <= 2) return 0;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

