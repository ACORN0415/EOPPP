// RTPG_818: vars=10 stmts=3
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 30;
}
int main() { test_func(10); return 0; }

