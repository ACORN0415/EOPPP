// RTPG_6608: vars=129 stmts=8
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + test_func(x - 2);
}
int main() { test_func(10); return 0; }

