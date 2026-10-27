// RTPG_2654: vars=16 stmts=4
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + test_func(k - 2);
}
int main() { test_func(10); return 0; }

