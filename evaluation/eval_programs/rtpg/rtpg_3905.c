// RTPG_3905: vars=8 stmts=2
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 47803;
}
int main() { test_func(10); return 0; }

