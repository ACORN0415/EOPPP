// RTPG_4156: vars=18 stmts=4
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 61464;
}
int main() { test_func(10); return 0; }

