// RTPG_8322: vars=56 stmts=6
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 87;
}
int main() { test_func(10); return 0; }

