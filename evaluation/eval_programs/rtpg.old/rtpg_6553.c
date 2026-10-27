// RTPG_6553: vars=4 stmts=6
int test_func(int x) {
    if (x <= 2) return 0;
    return 3 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

