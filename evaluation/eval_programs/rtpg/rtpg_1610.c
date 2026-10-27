// RTPG_1610: vars=4 stmts=5
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 7;
}
int main() { test_func(10); return 0; }

