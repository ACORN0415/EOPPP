// RTPG_7380: vars=34 stmts=3
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 22808;
}
int main() { test_func(10); return 0; }

