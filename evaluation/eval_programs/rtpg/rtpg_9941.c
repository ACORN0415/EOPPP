// RTPG_9941: vars=118 stmts=5
int test_func(int x) {
    if (x <= 1) return 0;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

