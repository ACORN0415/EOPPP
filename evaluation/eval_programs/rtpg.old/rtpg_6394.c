// RTPG_6394: vars=3 stmts=4
void test_func(void) {
    int tmp75 = 28;
    int lo48 = 87;
    int prev42 = 10;
    int i;
    for (i = 0; i < 22; i++) {
        lo48 = prev42 + prev42;
        lo48 = tmp75 - lo48;
        prev42 = prev42;
        tmp75 = prev42;
    }
}
int main() { test_func(); return 0; }

