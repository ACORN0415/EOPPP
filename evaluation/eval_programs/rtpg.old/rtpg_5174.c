// RTPG_5174: vars=19 stmts=9
int test_func(int k) {
    if (k <= 1) return 1;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

