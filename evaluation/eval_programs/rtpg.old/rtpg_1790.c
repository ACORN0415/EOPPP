// RTPG_1790: vars=5 stmts=2
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 35;
}
int main() { test_func(10); return 0; }

