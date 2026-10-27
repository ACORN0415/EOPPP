// RTPG_7603: vars=66 stmts=6
int test_func(int n) {
    if (n <= 1) return 0;
    return 4 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

