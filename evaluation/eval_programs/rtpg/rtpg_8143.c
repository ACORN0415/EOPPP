// RTPG_8143: vars=26 stmts=6
int test_func(int k) {
    if (k <= 0) return 0;
    return test_func(k - 1) + -13;
}
int main() { test_func(10); return 0; }

