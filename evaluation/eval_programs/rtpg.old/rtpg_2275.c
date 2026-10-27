// RTPG_2275: vars=33 stmts=4
int test_func(int k) {
    if (k <= 2) return 1;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

