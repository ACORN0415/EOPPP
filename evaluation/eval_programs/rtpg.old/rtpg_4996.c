// RTPG_4996: vars=34 stmts=6
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 40;
}
int main() { test_func(10); return 0; }

