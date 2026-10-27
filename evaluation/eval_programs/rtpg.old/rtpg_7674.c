// RTPG_7674: vars=8 stmts=5
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

