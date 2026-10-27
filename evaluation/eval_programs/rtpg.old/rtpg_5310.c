// RTPG_5310: vars=7 stmts=10
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

