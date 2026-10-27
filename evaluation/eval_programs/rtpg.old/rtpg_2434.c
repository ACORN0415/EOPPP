// RTPG_2434: vars=6 stmts=2
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 16480;
}
int main() { test_func(10); return 0; }

