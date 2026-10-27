// RTPG_185: vars=34 stmts=3
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 48494;
}
int main() { test_func(10); return 0; }

