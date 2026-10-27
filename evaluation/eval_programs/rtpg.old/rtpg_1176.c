// RTPG_1176: vars=30 stmts=2
int test_func(int x) {
    if (x <= 2) return 1;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

