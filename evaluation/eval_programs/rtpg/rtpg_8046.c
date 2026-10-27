// RTPG_8046: vars=35 stmts=6
int test_func(int k) {
    if (k <= 0) return 1;
    return 5 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

