// RTPG_6523: vars=129 stmts=8
int test_func(int k) {
    if (k <= 1) return 0;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

