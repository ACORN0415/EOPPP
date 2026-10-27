// RTPG_8521: vars=23 stmts=4
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

