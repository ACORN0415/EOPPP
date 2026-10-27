// RTPG_6574: vars=111 stmts=5
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 19;
}
int main() { test_func(10); return 0; }

