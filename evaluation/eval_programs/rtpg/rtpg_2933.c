// RTPG_2933: vars=4 stmts=9
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 5;
}
int main() { test_func(10); return 0; }

