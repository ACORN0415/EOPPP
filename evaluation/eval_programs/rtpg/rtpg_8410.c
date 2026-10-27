// RTPG_8410: vars=7 stmts=9
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 41789;
}
int main() { test_func(10); return 0; }

