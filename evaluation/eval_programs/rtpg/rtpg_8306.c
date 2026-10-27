// RTPG_8306: vars=4 stmts=3
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 0;
}
int main() { test_func(10); return 0; }

