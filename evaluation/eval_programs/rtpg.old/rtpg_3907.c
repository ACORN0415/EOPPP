// RTPG_3907: vars=9 stmts=5
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 53629;
}
int main() { test_func(10); return 0; }

