// RTPG_4603: vars=3 stmts=3
int test_func(int x) {
    if (x <= 1) return 1;
    return 2 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

