// RTPG_2515: vars=28 stmts=4
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + 37;
}
int main() { test_func(10); return 0; }

