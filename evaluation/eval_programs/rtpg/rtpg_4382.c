// RTPG_4382: vars=32 stmts=12
int test_func(int k) {
    if (k <= 1) return 0;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

