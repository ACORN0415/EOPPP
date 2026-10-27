// RTPG_9683: vars=107 stmts=4
int test_func(int x) {
    if (x <= 1) return 1;
    return 4 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

