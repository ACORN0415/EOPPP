// RTPG_2615: vars=7 stmts=10
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 5;
}
int main() { test_func(10); return 0; }

