// RTPG_3426: vars=31 stmts=10
int test_func(int n) {
    if (n <= 0) return 0;
    return test_func(n - 1) + 51;
}
int main() { test_func(10); return 0; }

