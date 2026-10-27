// RTPG_6525: vars=4 stmts=8
void test_func(void) {
    int tmp49 = 46;
    int tmp17 = -2;
    int acc34 = 9;
    int c11 = 3275;
    int i;
    for (i = 0; i < 46; i++) {
        tmp17 = acc34 - tmp49;
        acc34 = tmp49 - c11;
        tmp49 = tmp49 + 3;
        c11 = c11 + 3;
        tmp17 = tmp17 + 3;
        c11 = c11 + 5;
        acc34 = acc34 - 5;
        acc34 = tmp17 - 3;
        if (tmp49 == 91) {
        tmp49 = tmp17;
        }
    }
}
int main() { test_func(); return 0; }

