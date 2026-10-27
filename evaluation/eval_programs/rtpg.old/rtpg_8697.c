// RTPG_8697: vars=67 stmts=12
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + -22;
}
int main() { test_func(10); return 0; }

