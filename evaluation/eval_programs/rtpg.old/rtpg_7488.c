// RTPG_7488: vars=128 stmts=8
int test_func(int n) {
    if (n <= 1) return 0;
    return 3 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

