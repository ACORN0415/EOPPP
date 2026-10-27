// RTPG_8439: vars=47 stmts=3
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 58885;
}
int main() { test_func(10); return 0; }

