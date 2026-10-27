// RTPG_2064: vars=28 stmts=4
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + -39;
}
int main() { test_func(10); return 0; }

