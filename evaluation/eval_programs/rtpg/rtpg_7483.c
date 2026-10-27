// RTPG_7483: vars=39 stmts=4
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 33315;
}
int main() { test_func(10); return 0; }

