// RTPG_3689: vars=15 stmts=2
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 12648;
}
int main() { test_func(10); return 0; }

