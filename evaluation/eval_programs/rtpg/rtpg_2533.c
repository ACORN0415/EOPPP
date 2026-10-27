// RTPG_2533: vars=8 stmts=8
int test_func(int k) {
    if (k <= 0) return 0;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

