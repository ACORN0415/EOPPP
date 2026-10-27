// RTPG_8706: vars=126 stmts=2
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 73;
}
int main() { test_func(10); return 0; }

