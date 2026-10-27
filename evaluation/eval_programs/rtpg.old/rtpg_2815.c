// RTPG_2815: vars=16 stmts=7
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + -15;
}
int main() { test_func(10); return 0; }

