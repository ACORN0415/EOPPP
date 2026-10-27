// RTPG_7871: vars=72 stmts=5
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

