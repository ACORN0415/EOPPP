// RTPG_7138: vars=6 stmts=7
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 5709;
}
int main() { test_func(10); return 0; }

