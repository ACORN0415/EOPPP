// RTPG_8856: vars=3 stmts=5
void test_func(void) {
    int c33 = 1;
    int y36 = 10;
    int acc3 = 11475;
    int i;
    for (i = 0; i < 59; i++) {
        c33 = y36 - y36;
        y36 = c33;
        y36 = c33 - acc3;
        c33 = c33 + c33;
        acc3 = c33 + 44;
    }
}
int main() { test_func(); return 0; }

