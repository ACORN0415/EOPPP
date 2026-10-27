// RTPG_792: vars=134 stmts=3
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 5;
}
int main() { test_func(10); return 0; }

