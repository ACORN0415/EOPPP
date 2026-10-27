// RTPG_5580: vars=130 stmts=7
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 36898;
}
int main() { test_func(10); return 0; }

