// RTPG_763: vars=9 stmts=9
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 3;
}
int main() { test_func(10); return 0; }

