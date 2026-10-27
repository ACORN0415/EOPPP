// RTPG_9985: vars=20 stmts=3
int test_func(int x) {
    if (x <= 0) return 1;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

