// RTPG_9499: vars=5 stmts=2
int test_func(int k) {
    if (k <= 2) return 0;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

