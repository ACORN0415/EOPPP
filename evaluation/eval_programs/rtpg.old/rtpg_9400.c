// RTPG_9400: vars=4 stmts=7
int test_func(int k) {
    if (k <= 2) return 1;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

