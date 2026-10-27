// RTPG_4132: vars=123 stmts=5
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 1;
}
int main() { test_func(10); return 0; }

