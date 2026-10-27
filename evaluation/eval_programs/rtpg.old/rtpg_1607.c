// RTPG_1607: vars=36 stmts=4
int test_func(int k) {
    if (k <= 0) return 0;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

