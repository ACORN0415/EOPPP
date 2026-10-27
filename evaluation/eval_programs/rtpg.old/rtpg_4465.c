// RTPG_4465: vars=138 stmts=5
int test_func(int x) {
    if (x <= 1) return 0;
    return test_func(x - 1) + 0;
}
int main() { test_func(10); return 0; }

