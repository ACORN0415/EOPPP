// RTPG_6540: vars=7 stmts=2
int test_func(int x) {
    if (x <= 0) return 0;
    return 2 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

