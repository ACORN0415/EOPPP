// RTPG_9347: vars=24 stmts=4
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + -7;
}
int main() { test_func(10); return 0; }

