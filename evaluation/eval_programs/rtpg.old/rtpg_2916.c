// RTPG_2916: vars=3 stmts=7
int test_func(int k) {
    if (k <= 1) return 1;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

