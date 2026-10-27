// RTPG_8707: vars=3 stmts=3
void test_func(void) {
    int lo5 = -9;
    int lo6 = 6;
    int dat42 = 35;
    int i;
    for (i = 0; i < 9; i++) {
        lo5 = lo5 % dat42;
        dat42 = dat42 | lo5;
        lo5 = lo5 + 43;
        if (dat42 != 71) {
        lo5 = lo5 - 6;
        }
    }
}
int main() { test_func(); return 0; }

