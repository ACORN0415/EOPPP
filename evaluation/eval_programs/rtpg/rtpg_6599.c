// RTPG_6599: vars=4 stmts=8
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 33;
}
int main() { test_func(10); return 0; }

