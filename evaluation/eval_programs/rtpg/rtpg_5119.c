// RTPG_5119: vars=39 stmts=2
int test_func(int x) {
    if (x <= 1) return 1;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

