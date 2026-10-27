// RTPG_4313: vars=29 stmts=11
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 8171;
}
int main() { test_func(10); return 0; }

