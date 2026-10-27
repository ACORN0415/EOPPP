// RTPG_8521: vars=48 stmts=2
int test_func(int k) {
    if (k <= 2) return 1;
    return 5 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

