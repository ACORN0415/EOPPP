// RTPG_2342: vars=5 stmts=7
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

