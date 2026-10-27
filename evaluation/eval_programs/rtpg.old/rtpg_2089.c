// RTPG_2089: vars=18 stmts=2
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 7;
}
int main() { test_func(10); return 0; }

