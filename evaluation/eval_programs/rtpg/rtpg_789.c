// RTPG_789: vars=7 stmts=5
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 18004;
}
int main() { test_func(10); return 0; }

