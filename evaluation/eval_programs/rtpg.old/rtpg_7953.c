// RTPG_7953: vars=95 stmts=5
int test_func(int k) {
    if (k <= 0) return 0;
    return 2 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

