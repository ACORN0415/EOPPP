// RTPG_3760: vars=3 stmts=7
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 9676;
}
int main() { test_func(10); return 0; }

