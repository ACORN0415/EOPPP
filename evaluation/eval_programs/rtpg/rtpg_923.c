// RTPG_923: vars=3 stmts=5
int test_func(int x) {
    if (x <= 0) return 1;
    return 3 * test_func(x - 1);
}
int main() { test_func(10); return 0; }

