// RTPG_6130: vars=22 stmts=5
int test_func(int x) {
    if (x <= 2) return 0;
    return 5 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

