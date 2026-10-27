// RTPG_6966: vars=4 stmts=6
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + 9;
}
int main() { test_func(10); return 0; }

