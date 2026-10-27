// RTPG_3965: vars=12 stmts=9
int test_func(int k) {
    if (k <= 1) return 1;
    return 5 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

