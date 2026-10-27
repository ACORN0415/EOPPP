// RTPG_3576: vars=31 stmts=11
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 20946;
}
int main() { test_func(10); return 0; }

