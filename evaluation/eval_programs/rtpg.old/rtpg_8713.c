// RTPG_8713: vars=49 stmts=2
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 20;
}
int main() { test_func(10); return 0; }

