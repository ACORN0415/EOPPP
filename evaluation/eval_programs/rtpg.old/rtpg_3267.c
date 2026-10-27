// RTPG_3267: vars=136 stmts=4
int test_func(int x) {
    if (x <= 2) return 0;
    return 5 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

