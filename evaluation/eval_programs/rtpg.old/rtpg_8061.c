// RTPG_8061: vars=94 stmts=8
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + -6;
}
int main() { test_func(10); return 0; }

