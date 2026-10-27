// RTPG_3530: vars=16 stmts=2
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + -3;
}
int main() { test_func(10); return 0; }

