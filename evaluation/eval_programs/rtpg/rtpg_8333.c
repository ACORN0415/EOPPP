// RTPG_8333: vars=7 stmts=6
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 1;
}
int main() { test_func(10); return 0; }

