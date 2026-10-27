// RTPG_3156: vars=10 stmts=4
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 19605;
}
int main() { test_func(10); return 0; }

