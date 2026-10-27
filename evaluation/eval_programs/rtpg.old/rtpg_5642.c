// RTPG_5642: vars=6 stmts=3
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + -4;
}
int main() { test_func(10); return 0; }

