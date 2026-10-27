// RTPG_975: vars=94 stmts=3
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 7;
}
int main() { test_func(10); return 0; }

