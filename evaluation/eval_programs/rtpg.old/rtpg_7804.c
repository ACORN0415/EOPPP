// RTPG_7804: vars=3 stmts=4
int test_func(int x) {
    if (x <= 2) return 1;
    return 5 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

