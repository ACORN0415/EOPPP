// RTPG_5354: vars=109 stmts=3
int test_func(int k) {
    if (k <= 1) return 0;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

