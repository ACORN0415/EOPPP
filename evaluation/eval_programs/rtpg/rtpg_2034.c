// RTPG_2034: vars=9 stmts=5
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + -11;
}
int main() { test_func(10); return 0; }

