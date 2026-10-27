// RTPG_1647: vars=129 stmts=4
int test_func(int k) {
    if (k <= 0) return 1;
    return test_func(k - 1) + 27896;
}
int main() { test_func(10); return 0; }

