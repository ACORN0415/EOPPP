// RTPG_9982: vars=52 stmts=6
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

