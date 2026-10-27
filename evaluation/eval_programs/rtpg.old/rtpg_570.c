// RTPG_570: vars=50 stmts=10
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 6474;
}
int main() { test_func(10); return 0; }

