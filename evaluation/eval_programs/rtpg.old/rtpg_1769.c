// RTPG_1769: vars=104 stmts=4
int test_func(int x) {
    if (x <= 0) return 0;
    return test_func(x - 1) + 8256;
}
int main() { test_func(10); return 0; }

