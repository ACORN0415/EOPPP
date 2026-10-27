// RTPG_5895: vars=50 stmts=3
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

