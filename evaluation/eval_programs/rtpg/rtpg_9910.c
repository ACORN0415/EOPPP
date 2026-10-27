// RTPG_9910: vars=71 stmts=3
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 2;
}
int main() { test_func(10); return 0; }

