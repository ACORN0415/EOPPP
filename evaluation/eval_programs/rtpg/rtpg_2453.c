// RTPG_2453: vars=33 stmts=4
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 8;
}
int main() { test_func(10); return 0; }

