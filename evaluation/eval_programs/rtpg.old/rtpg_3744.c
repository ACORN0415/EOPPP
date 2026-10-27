// RTPG_3744: vars=8 stmts=4
int test_func(int k) {
    if (k <= 1) return 1;
    return test_func(k - 1) + 76;
}
int main() { test_func(10); return 0; }

