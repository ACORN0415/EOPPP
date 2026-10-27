// RTPG_8242: vars=25 stmts=7
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + -41;
}
int main() { test_func(10); return 0; }

