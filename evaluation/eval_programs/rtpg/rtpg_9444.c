// RTPG_9444: vars=47 stmts=6
int test_func(int x) {
    if (x <= 1) return 1;
    return 3 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

