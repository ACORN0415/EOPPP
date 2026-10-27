// RTPG_2768: vars=24 stmts=9
int test_func(int k) {
    if (k <= 0) return 0;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

