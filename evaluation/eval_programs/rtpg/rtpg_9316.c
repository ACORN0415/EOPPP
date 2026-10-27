// RTPG_9316: vars=50 stmts=4
int test_func(int x) {
    if (x <= 2) return 1;
    return 3 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

