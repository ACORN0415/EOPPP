// RTPG_3289: vars=96 stmts=6
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 7;
}
int main() { test_func(10); return 0; }

