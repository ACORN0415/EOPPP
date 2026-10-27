// RTPG_8000: vars=49 stmts=2
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 4;
}
int main() { test_func(10); return 0; }

