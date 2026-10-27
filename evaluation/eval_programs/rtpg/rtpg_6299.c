// RTPG_6299: vars=10 stmts=5
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 38;
}
int main() { test_func(10); return 0; }

