// RTPG_1034: vars=10 stmts=5
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 55324;
}
int main() { test_func(10); return 0; }

