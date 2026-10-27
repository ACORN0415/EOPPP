// RTPG_7564: vars=17 stmts=3
int test_func(int k) {
    if (k <= 1) return 1;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

