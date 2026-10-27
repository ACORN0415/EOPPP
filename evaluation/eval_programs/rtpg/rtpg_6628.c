// RTPG_6628: vars=5 stmts=5
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 26281;
}
int main() { test_func(10); return 0; }

