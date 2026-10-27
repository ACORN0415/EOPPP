// RTPG_8307: vars=10 stmts=4
int test_func(int n) {
    if (n <= 1) return 0;
    return test_func(n - 1) + 21592;
}
int main() { test_func(10); return 0; }

