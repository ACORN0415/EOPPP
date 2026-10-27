// RTPG_8366: vars=9 stmts=2
int test_func(int k) {
    if (k <= 2) return 0;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

