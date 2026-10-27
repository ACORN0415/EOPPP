// RTPG_4346: vars=7 stmts=8
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 2;
}
int main() { test_func(10); return 0; }

