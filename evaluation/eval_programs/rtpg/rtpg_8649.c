// RTPG_8649: vars=3 stmts=3
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 72;
}
int main() { test_func(10); return 0; }

