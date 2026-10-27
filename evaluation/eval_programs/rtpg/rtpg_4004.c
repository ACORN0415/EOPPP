// RTPG_4004: vars=6 stmts=12
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 10;
}
int main() { test_func(10); return 0; }

