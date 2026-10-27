// RTPG_7957: vars=33 stmts=2
int test_func(int x) {
    if (x <= 0) return 1;
    return test_func(x - 1) + 4;
}
int main() { test_func(10); return 0; }

