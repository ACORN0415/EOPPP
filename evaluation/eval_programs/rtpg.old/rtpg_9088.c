// RTPG_9088: vars=5 stmts=2
int test_func(int x) {
    if (x <= 0) return 0;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

