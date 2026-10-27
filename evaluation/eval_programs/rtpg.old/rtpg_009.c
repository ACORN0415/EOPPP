// RTPG_9: vars=34 stmts=4
int test_func(int k) {
    if (k <= 1) return 0;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

