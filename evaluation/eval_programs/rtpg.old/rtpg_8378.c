// RTPG_8378: vars=40 stmts=5
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 72;
}
int main() { test_func(10); return 0; }

