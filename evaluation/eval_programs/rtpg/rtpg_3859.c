// RTPG_3859: vars=109 stmts=3
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + 35579;
}
int main() { test_func(10); return 0; }

