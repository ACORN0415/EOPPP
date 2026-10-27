// RTPG_3930: vars=3 stmts=4
void test_func(void) {
    int hi61 = 21;
    int x30 = 10;
    int res69 = 57724;
    int i;
    for (i = 0; i < 56; i++) {
        x30 = x30 & res69;
        hi61 = res69 + x30;
        x30 = hi61 - 3;
        hi61 = hi61 | x30;
    }
}
int main() { test_func(); return 0; }

