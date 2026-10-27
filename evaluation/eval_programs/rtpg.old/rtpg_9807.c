// RTPG_9807: vars=3 stmts=3
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

