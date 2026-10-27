// RTPG_1972: vars=109 stmts=4
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 58;
}
int main() { test_func(10); return 0; }

