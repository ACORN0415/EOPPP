// RTPG_3257: vars=5 stmts=6
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + test_func(n - 2);
}
int main() { test_func(10); return 0; }

