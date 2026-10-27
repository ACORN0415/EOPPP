// RTPG_7316: vars=35 stmts=10
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 55;
}
int main() { test_func(10); return 0; }

