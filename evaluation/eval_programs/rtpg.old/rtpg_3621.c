// RTPG_3621: vars=29 stmts=5
int test_func(int k) {
    if (k <= 0) return 1;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

