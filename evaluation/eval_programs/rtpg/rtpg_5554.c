// RTPG_5554: vars=8 stmts=3
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 13383;
}
int main() { test_func(10); return 0; }

