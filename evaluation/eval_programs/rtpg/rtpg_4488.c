// RTPG_4488: vars=4 stmts=3
int test_func(int k) {
    if (k <= 2) return 0;
    return 5 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

