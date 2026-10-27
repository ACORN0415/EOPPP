// RTPG_8347: vars=31 stmts=4
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 18;
}
int main() { test_func(10); return 0; }

