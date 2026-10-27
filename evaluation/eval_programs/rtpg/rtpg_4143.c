// RTPG_4143: vars=8 stmts=8
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 2;
}
int main() { test_func(10); return 0; }

