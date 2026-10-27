// RTPG_8370: vars=50 stmts=3
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + -45;
}
int main() { test_func(10); return 0; }

