// RTPG_3929: vars=19 stmts=6
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 28;
}
int main() { test_func(10); return 0; }

