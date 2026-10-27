// RTPG_6867: vars=70 stmts=6
int test_func(int n) {
    if (n <= 2) return 1;
    return 5 * test_func(n - 1);
}
int main() { test_func(10); return 0; }

