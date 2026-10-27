// RTPG_1411: vars=36 stmts=10
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 43169;
}
int main() { test_func(10); return 0; }

