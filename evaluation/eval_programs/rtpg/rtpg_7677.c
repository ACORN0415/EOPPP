// RTPG_7677: vars=71 stmts=2
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 10;
}
int main() { test_func(10); return 0; }

