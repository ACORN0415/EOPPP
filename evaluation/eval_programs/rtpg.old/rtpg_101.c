// RTPG_101: vars=48 stmts=4
int test_func(int n) {
    if (n <= 2) return 1;
    return test_func(n - 1) + 48933;
}
int main() { test_func(10); return 0; }

