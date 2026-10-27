// RTPG_6156: vars=5 stmts=9
void test_func(void) {
    int prev9 = 48977;
    int val98 = 61625;
    int a12 = 6;
    int cur73 = 4;
    int hi89 = 59530;
    int i;
    for (i = 0; i < 16; i++) {
        a12 = prev9 - val98;
        val98 = val98 - 1;
        val98 = val98 + cur73;
        hi89 = prev9 + cur73;
        cur73 = a12 + val98;
        a12 = hi89;
        val98 = prev9 + 15;
        prev9 = prev9 + a12;
        a12 = val98 - cur73;
    }
}
int main() { test_func(); return 0; }

