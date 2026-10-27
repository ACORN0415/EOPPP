// RTPG_4437: vars=5 stmts=7
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 63;
}
int main() { test_func(10); return 0; }

