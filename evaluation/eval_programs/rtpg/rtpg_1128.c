// RTPG_1128: vars=36 stmts=6
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + -43;
}
int main() { test_func(10); return 0; }

