// RTPG_8219: vars=10 stmts=8
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 40;
}
int main() { test_func(10); return 0; }

