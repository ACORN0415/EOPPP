// RTPG_7161: vars=135 stmts=6
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 37;
}
int main() { test_func(10); return 0; }

