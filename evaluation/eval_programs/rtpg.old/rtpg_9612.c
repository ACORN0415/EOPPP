// RTPG_9612: vars=37 stmts=12
int test_func(int x) {
    if (x <= 1) return 0;
    return 3 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

