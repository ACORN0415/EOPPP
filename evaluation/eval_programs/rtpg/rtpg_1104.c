// RTPG_1104: vars=20 stmts=3
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + -35;
}
int main() { test_func(10); return 0; }

