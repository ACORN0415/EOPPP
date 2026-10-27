// RTPG_6018: vars=106 stmts=5
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + -35;
}
int main() { test_func(10); return 0; }

