// RTPG_3520: vars=10 stmts=5
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + -23;
}
int main() { test_func(10); return 0; }

