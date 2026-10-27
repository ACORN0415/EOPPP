// RTPG_6457: vars=7 stmts=3
int test_func(int x) {
    if (x <= 1) return 1;
    return test_func(x - 1) + 7;
}
int main() { test_func(10); return 0; }

