// RTPG_853: vars=72 stmts=7
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + -25;
}
int main() { test_func(10); return 0; }

