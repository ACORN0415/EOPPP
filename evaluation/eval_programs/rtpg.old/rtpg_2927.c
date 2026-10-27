// RTPG_2927: vars=23 stmts=2
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 24065;
}
int main() { test_func(10); return 0; }

