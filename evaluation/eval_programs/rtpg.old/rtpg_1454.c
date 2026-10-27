// RTPG_1454: vars=49 stmts=5
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 33;
}
int main() { test_func(10); return 0; }

