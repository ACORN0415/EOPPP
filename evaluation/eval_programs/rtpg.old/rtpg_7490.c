// RTPG_7490: vars=3 stmts=3
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 78;
}
int main() { test_func(10); return 0; }

