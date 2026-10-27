// RTPG_7875: vars=30 stmts=7
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 63528;
}
int main() { test_func(10); return 0; }

