// RTPG_3342: vars=43 stmts=2
int test_func(int n) {
    if (n <= 1) return 1;
    return 4 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

