// RTPG_8021: vars=8 stmts=8
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 43;
}
int main() { test_func(10); return 0; }

