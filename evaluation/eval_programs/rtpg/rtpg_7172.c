// RTPG_7172: vars=9 stmts=9
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 21144;
}
int main() { test_func(10); return 0; }

