// RTPG_537: vars=6 stmts=7
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + -20;
}
int main() { test_func(10); return 0; }

