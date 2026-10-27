// RTPG_8136: vars=10 stmts=5
int test_func(int k) {
    if (k <= 2) return 1;
    return 4 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

