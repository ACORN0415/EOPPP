// RTPG_3646: vars=7 stmts=5
int test_func(int x) {
    if (x <= 1) return 1;
    return 5 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

