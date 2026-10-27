// RTPG_2495: vars=3 stmts=4
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 36;
}
int main() { test_func(10); return 0; }

