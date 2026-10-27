// RTPG_786: vars=9 stmts=12
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + -30;
}
int main() { test_func(10); return 0; }

