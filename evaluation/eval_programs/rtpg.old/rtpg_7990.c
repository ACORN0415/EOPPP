// RTPG_7990: vars=7 stmts=6
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 17190;
}
int main() { test_func(10); return 0; }

