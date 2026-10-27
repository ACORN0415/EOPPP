// RTPG_5820: vars=8 stmts=9
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

