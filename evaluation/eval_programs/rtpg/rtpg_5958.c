// RTPG_5958: vars=134 stmts=8
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

