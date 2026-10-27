// RTPG_680: vars=5 stmts=6
int test_func(int x) {
    if (x <= 1) return 0;
    return 2 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

