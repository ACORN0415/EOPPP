// RTPG_4147: vars=7 stmts=2
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

