// RTPG_4171: vars=8 stmts=8
void test_func(void) {
    int val82 = -46;
    float sum75 = 11.61;
    double a10 = 50.28;
    int lo54 = -7;
    float tmp78 = 25.56;
    int b65 = 10689;
    int sum71 = 1;
    int acc68 = 40;
    int i;
    for (i = 0; i < 49; i++) {
        b65 = sum75 / a10;
        val82 = sum75 - a10;
        sum71 = sum71 - 1;
        b65 = sum71 % acc68;
        b65 = b65 + 1;
        tmp78 = a10;
        b65 = a10 / sum75;
        sum75 = val82 & acc68;
    }
}
int main() { test_func(); return 0; }

