// RTPG_510: vars=28 stmts=6
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 43674;
}
int main() { test_func(10); return 0; }

