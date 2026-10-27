// RTPG_9690: vars=6 stmts=3
int test_func(int n) {
    if (n <= 0) return 1;
    return 3 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

