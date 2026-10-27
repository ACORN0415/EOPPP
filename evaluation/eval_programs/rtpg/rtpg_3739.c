// RTPG_3739: vars=3 stmts=8
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 10;
}
int main() { test_func(10); return 0; }

