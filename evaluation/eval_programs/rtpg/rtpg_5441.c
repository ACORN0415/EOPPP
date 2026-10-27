// RTPG_5441: vars=6 stmts=5
void test_func(void) {
    int prev14 = 1637;
    int cnt50 = 10;
    int v96 = 7;
    int res36 = 2477;
    int res0 = 19;
    int acc79 = 5;
    int *ptr = &acc79;
    int i;
    for (i = 0; i < 12; i++) {
        res36 = cnt50 - res36;
        v96 = acc79 - v96;
        res0 = res0 - res0;
        res36 = res36 - 2;
        acc79 = res36 + cnt50;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

