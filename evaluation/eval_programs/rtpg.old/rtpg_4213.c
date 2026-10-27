// RTPG_4213: vars=46 stmts=7
int test_func(int x) {
    if (x <= 2) return 0;
    return test_func(x - 1) + 22605;
}
int main() { test_func(10); return 0; }

