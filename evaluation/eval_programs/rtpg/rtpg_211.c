// RTPG_211: vars=3 stmts=11
int test_func(int n) {
    if (n <= 1) return 1;
    return 2 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

