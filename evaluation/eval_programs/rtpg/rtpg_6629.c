// RTPG_6629: vars=15 stmts=3
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 6;
}
int main() { test_func(10); return 0; }

