// RTPG_2399: vars=3 stmts=9
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

