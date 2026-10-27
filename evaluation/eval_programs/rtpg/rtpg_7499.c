// RTPG_7499: vars=66 stmts=5
int test_func(int k) {
    if (k <= 0) return 0;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

