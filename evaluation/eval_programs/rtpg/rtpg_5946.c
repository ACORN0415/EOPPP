// RTPG_5946: vars=6 stmts=8
void test_func(void) {
    int x48 = 46355;
    int x34 = 6;
    int b28 = 62577;
    int prev4 = 17178;
    int val31 = 6;
    int x31 = 46865;
    int *ptr = &x34;
    int h0 = 10;
    int sv0 = 0;
    int h1 = -13;
    int sv1 = 0;
    int h2 = 9;
    int sv2 = 0;
    int i;
    for (i = 0; i < 30; i++) {
        prev4 = prev4 - x34;
        b28 = prev4 * 34;
        b28 = b28 + b28;
        prev4 = x34 + x34;
        val31 = val31 - 3;
        b28 = prev4 / val31;
        val31 = val31 - x31;
        val31 = x31 % x48;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

