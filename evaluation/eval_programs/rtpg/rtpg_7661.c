// RTPG_7661: vars=8 stmts=2
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

