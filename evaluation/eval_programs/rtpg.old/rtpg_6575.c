// RTPG_6575: vars=57 stmts=5
int test_func(int k) {
    if (k <= 2) return 1;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

