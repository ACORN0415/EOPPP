// RTPG_2354: vars=80 stmts=2
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 9;
}
int main() { test_func(10); return 0; }

