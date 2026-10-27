// RTPG_4971: vars=6 stmts=7
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 29530;
}
int main() { test_func(10); return 0; }

