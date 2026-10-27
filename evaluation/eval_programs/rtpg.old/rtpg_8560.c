// RTPG_8560: vars=9 stmts=3
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 10;
}
int main() { test_func(10); return 0; }

