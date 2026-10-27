// RTPG_8792: vars=111 stmts=4
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + -41;
}
int main() { test_func(10); return 0; }

