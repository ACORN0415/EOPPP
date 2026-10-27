// RTPG_6089: vars=8 stmts=4
int test_func(int n) {
    if (n <= 0) return 1;
    return test_func(n - 1) + 62034;
}
int main() { test_func(10); return 0; }

