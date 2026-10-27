// RTPG_8337: vars=98 stmts=4
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 24;
}
int main() { test_func(10); return 0; }

