// RTPG_4609: vars=28 stmts=2
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + -30;
}
int main() { test_func(10); return 0; }

