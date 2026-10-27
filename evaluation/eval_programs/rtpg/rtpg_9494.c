// RTPG_9494: vars=8 stmts=6
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

