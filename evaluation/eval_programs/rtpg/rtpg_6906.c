// RTPG_6906: vars=4 stmts=9
void test_func(void) {
    int acc7 = 3;
    int prev37 = 0;
    int val70 = 17202;
    int res2 = 10;
    int i;
    for (i = 0; i < 80; i++) {
        res2 = acc7;
        acc7 = prev37;
        acc7 = res2 - 21023;
        val70 = acc7 + 12;
        val70 = val70 + 5;
        prev37 = prev37 - 4;
        acc7 = prev37 + res2;
        prev37 = prev37 + acc7;
        prev37 = val70 + res2;
    }
}
int main() { test_func(); return 0; }

