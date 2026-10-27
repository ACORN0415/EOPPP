// RTPG_6491: vars=3 stmts=3
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 27;
}
int main() { test_func(10); return 0; }

