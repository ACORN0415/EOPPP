// RTPG_207: vars=34 stmts=3
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 56701;
}
int main() { test_func(10); return 0; }

