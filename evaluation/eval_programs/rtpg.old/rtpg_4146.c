// RTPG_4146: vars=8 stmts=8
void test_func(void) {
    int sum75 = -46;
    float sum71 = 11.61;
    double tmp78 = 50.28;
    int val82 = -7;
    float a10 = 25.56;
    int lo54 = 10689;
    int acc68 = 1;
    int b65 = 40;
    int i;
    for (i = 0; i < 49; i++) {
        lo54 = sum71 / tmp78;
        sum75 = sum71 - tmp78;
        acc68 = acc68 - 1;
        b65 = acc68 ^ val82;
        tmp78 = a10 - lo54;
        tmp78 = tmp78 + sum75;
        sum75 = sum75 + 5;
        sum71 = tmp78 - 3;
    }
}
int main() { test_func(); return 0; }

