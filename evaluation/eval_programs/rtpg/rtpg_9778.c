// RTPG_9778: vars=8 stmts=9
int test_func(int k) {
    if (k <= 1) return 0;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

