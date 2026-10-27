// RTPG_7100: vars=6 stmts=7
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 7;
}
int main() { test_func(10); return 0; }

