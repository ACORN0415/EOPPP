// RTPG_1687: vars=17 stmts=3
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 318;
}
int main() { test_func(10); return 0; }

