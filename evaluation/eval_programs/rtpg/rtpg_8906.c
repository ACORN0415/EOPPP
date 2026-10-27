// RTPG_8906: vars=16 stmts=8
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 49882;
}
int main() { test_func(10); return 0; }

