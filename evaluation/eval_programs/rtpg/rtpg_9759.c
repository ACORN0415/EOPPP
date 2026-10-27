// RTPG_9759: vars=4 stmts=7
int test_func(int x) {
    if (x <= 1) return 1;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

