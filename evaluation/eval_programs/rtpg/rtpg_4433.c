// RTPG_4433: vars=3 stmts=4
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 27268;
}
int main() { test_func(10); return 0; }

