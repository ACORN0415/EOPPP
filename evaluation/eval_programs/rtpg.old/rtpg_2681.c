// RTPG_2681: vars=15 stmts=7
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + -22;
}
int main() { test_func(10); return 0; }

