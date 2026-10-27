// RTPG_2855: vars=10 stmts=12
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 10;
}
int main() { test_func(10); return 0; }

