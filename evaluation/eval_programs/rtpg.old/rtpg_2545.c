// RTPG_2545: vars=3 stmts=8
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 29;
}
int main() { test_func(10); return 0; }

