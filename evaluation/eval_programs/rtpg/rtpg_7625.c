// RTPG_7625: vars=9 stmts=10
int test_func(int k) {
    if (k <= 1) return 0;
    return 4 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

