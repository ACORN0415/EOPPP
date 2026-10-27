// RTPG_9500: vars=84 stmts=3
int test_func(int k) {
    if (k <= 0) return 1;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

