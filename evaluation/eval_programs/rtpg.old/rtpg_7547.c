// RTPG_7547: vars=5 stmts=11
int test_func(int k) {
    if (k <= 1) return 1;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

