// RTPG_9736: vars=6 stmts=8
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 5;
}
int main() { test_func(10); return 0; }

