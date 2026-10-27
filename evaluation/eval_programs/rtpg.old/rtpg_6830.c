// RTPG_6830: vars=4 stmts=9
void test_func(void) {
    int prev37 = 3;
    int res2 = 0;
    int acc7 = 17202;
    int val70 = 10;
    int i;
    for (i = 0; i < 80; i++) {
        val70 = prev37;
        prev37 = res2;
        prev37 = val70 - 21023;
        acc7 = prev37 + 12;
        acc7 = acc7 + 5;
        res2 = res2 - 4;
        prev37 = res2 + val70;
        res2 = res2 + prev37;
        res2 = acc7 + val70;
    }
}
int main() { test_func(); return 0; }

