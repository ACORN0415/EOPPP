// RTPG_9798: vars=9 stmts=2
int test_func(int n) {
    if (n <= 2) return 0;
    return test_func(n - 1) + 9;
}
int main() { test_func(10); return 0; }

