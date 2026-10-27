// RTPG_9592: vars=8 stmts=3
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + -1;
}
int main() { test_func(10); return 0; }

