// RTPG_9642: vars=131 stmts=10
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

