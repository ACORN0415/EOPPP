// RTPG_2786: vars=3 stmts=8
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 90;
}
int main() { test_func(10); return 0; }

