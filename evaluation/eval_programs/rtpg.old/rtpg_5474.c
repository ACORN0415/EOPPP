// RTPG_5474: vars=10 stmts=3
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + -19;
}
int main() { test_func(10); return 0; }

