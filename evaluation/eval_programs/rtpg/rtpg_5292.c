// RTPG_5292: vars=26 stmts=6
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 41192;
}
int main() { test_func(10); return 0; }

