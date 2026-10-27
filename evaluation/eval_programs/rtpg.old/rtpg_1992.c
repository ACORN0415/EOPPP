// RTPG_1992: vars=9 stmts=4
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 3;
}
int main() { test_func(10); return 0; }

