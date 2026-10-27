// RTPG_997: vars=7 stmts=7
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + -45;
}
int main() { test_func(10); return 0; }

