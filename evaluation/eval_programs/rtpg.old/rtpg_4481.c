// RTPG_4481: vars=91 stmts=5
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + -26;
}
int main() { test_func(10); return 0; }

