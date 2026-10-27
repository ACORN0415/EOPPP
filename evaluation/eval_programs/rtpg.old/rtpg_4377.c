// RTPG_4377: vars=33 stmts=6
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 9;
}
int main() { test_func(10); return 0; }

