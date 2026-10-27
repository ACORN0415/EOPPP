// RTPG_7696: vars=6 stmts=2
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 45;
}
int main() { test_func(10); return 0; }

