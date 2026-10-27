// RTPG_5321: vars=119 stmts=8
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 78;
}
int main() { test_func(10); return 0; }

