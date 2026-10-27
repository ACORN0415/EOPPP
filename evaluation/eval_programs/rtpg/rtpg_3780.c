// RTPG_3780: vars=66 stmts=8
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + -42;
}
int main() { test_func(10); return 0; }

