// RTPG_7735: vars=120 stmts=11
int test_func(int k) {
    if (k <= 0) return 0;
    return 4 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

