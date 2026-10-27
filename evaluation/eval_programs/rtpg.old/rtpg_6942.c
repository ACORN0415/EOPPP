// RTPG_6942: vars=8 stmts=6
int test_func(int k) {
    if (k <= 2) return 0;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

