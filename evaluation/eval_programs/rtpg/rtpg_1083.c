// RTPG_1083: vars=68 stmts=5
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + 42;
}
int main() { test_func(10); return 0; }

