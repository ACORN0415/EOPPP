// RTPG_2344: vars=9 stmts=8
int test_func(int k) {
    if (k <= 1) return 0;
    return test_func(k - 1) + 11;
}
int main() { test_func(10); return 0; }

