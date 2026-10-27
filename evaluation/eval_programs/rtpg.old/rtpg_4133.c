// RTPG_4133: vars=6 stmts=2
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + -50;
}
int main() { test_func(10); return 0; }

