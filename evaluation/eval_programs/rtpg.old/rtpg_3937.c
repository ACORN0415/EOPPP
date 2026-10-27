// RTPG_3937: vars=39 stmts=2
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 30;
}
int main() { test_func(10); return 0; }

