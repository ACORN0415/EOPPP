// RTPG_5251: vars=45 stmts=8
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + -9;
}
int main() { test_func(10); return 0; }

