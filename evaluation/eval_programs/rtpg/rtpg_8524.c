// RTPG_8524: vars=47 stmts=4
int test_func(int k) {
    if (k <= 1) return 0;
    return 5 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

