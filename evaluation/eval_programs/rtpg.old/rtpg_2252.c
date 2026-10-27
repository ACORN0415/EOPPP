// RTPG_2252: vars=9 stmts=6
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 5;
}
int main() { test_func(10); return 0; }

