// RTPG_5029: vars=25 stmts=4
int test_func(int n) {
    if (n <= 2) return 0;
    return 3 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

