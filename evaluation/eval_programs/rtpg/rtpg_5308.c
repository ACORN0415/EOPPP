// RTPG_5308: vars=7 stmts=6
int test_func(int k) {
    if (k <= 2) return 0;
    return test_func(k - 1) + -23;
}
int main() { test_func(10); return 0; }

