// RTPG_3073: vars=9 stmts=7
int test_func(int n) {
    if (n <= 1) return 1;
    return test_func(n - 1) + 43064;
}
int main() { test_func(10); return 0; }

