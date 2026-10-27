// RTPG_439: vars=3 stmts=4
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + -40;
}
int main() { test_func(10); return 0; }

