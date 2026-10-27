// RTPG_9894: vars=7 stmts=12
void test_func(void) {
    int sum75 = 10;
    int cnt5 = 7;
    int dat1 = 1;
    int sum30 = 3;
    int acc78 = 9;
    int b51 = 30504;
    int a27 = 0;
    int i;
    for (i = 0; i < 58; i++) {
        acc78 = sum75 + cnt5;
        sum30 = sum30 - 4;
        a27 = sum75 + -5;
        acc78 = dat1 + a27;
        cnt5 = b51 + dat1;
        sum75 = dat1 - 60;
        sum30 = a27 + sum75;
        sum75 = cnt5;
        a27 = sum30 - sum75;
        acc78 = cnt5 + b51;
        dat1 = dat1 - 4;
        cnt5 = cnt5;
    }
}
int main() { test_func(); return 0; }

