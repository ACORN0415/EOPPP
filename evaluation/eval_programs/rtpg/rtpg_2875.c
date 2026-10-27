// RTPG_2875: vars=9 stmts=9
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 55;
}
int main() { test_func(10); return 0; }

