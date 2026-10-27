// RTPG_5235: vars=24 stmts=7
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 0;
}
int main() { test_func(10); return 0; }

