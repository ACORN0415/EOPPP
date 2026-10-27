// RTPG_3285: vars=127 stmts=5
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 61757;
}
int main() { test_func(10); return 0; }

