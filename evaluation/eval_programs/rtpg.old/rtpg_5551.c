// RTPG_5551: vars=26 stmts=3
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 8;
}
int main() { test_func(10); return 0; }

