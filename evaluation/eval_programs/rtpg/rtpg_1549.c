// RTPG_1549: vars=25 stmts=4
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 10;
}
int main() { test_func(10); return 0; }

