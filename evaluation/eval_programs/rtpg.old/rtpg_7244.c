// RTPG_7244: vars=35 stmts=4
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 33455;
}
int main() { test_func(10); return 0; }

