// RTPG_2086: vars=4 stmts=6
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

