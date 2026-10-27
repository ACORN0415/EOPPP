// RTPG_9483: vars=9 stmts=5
int test_func(int x) {
    if (x <= 2) return 0;
    return 2 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

