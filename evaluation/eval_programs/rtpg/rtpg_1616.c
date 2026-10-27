// RTPG_1616: vars=4 stmts=12
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 4;
}
int main() { test_func(10); return 0; }

