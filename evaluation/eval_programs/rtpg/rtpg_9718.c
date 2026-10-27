// RTPG_9718: vars=4 stmts=12
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 61955;
}
int main() { test_func(10); return 0; }

