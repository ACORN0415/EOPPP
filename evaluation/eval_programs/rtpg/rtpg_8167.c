// RTPG_8167: vars=64 stmts=3
int test_func(int k) {
    if (k <= 1) return 1;
    return 3 * test_func(k - 1);
}
int main() { test_func(10); return 0; }

