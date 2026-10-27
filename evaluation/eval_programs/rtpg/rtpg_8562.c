// RTPG_8562: vars=39 stmts=2
int test_func(int k) {
    if (k <= 1) return 1;
    return 4 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

