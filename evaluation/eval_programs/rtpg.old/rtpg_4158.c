// RTPG_4158: vars=9 stmts=6
int test_func(int k) {
    if (k <= 2) return 1;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

