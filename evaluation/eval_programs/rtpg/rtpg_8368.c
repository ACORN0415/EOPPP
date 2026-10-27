// RTPG_8368: vars=123 stmts=4
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 50;
}
int main() { test_func(10); return 0; }

