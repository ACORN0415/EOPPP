// RTPG_1627: vars=6 stmts=10
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 1179;
}
int main() { test_func(10); return 0; }

