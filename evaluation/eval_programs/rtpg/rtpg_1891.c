// RTPG_1891: vars=8 stmts=4
int test_func(int x) {
    if (x <= 0) return 1;
    return 5 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

