// RTPG_569: vars=3 stmts=2
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 48681;
}
int main() { test_func(10); return 0; }

