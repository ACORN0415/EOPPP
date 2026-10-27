// RTPG_8788: vars=70 stmts=8
int test_func(int x) {
    if (x <= 1) return 1;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

