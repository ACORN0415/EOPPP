// RTPG_6153: vars=9 stmts=6
int test_func(int x) {
    if (x <= 1) return 0;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

