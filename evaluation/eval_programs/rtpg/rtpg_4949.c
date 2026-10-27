// RTPG_4949: vars=10 stmts=6
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + -44;
}
int main() { test_func(10); return 0; }

