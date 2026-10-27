// RTPG_5784: vars=133 stmts=3
int test_func(int x) {
    if (x <= 2) return 1;
    return test_func(x - 1) + 21;
}
int main() { test_func(10); return 0; }

