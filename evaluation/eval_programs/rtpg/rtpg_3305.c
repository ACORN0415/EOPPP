// RTPG_3305: vars=33 stmts=2
int test_func(int k) {
    if (k <= 2) return 1;
    return test_func(k - 1) + 7;
}
int main() { test_func(10); return 0; }

