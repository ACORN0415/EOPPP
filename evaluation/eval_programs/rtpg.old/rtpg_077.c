// RTPG_77: vars=50 stmts=2
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 28;
}
int main() { test_func(10); return 0; }

