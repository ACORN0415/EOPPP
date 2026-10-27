// RTPG_5099: vars=5 stmts=11
void test_func(void) {
    int hi61 = -6;
    int hi40 = -7;
    float prev15 = 32.99;
    double z46 = 27.41;
    int b75 = 19;
    int *ptr = &b75;
    int i;
    for (i = 0; i < 37; i++) {
        b75 = prev15 - z46;
        hi40 = z46 + hi40;
        z46 = z46 + 2;
        hi61 = prev15 + hi40;
        b75 = b75 - prev15;
        prev15 = prev15 - 1;
        hi61 = prev15 + b75;
        b75 = prev15 - 85;
        hi61 = hi61 + b75;
        hi61 = b75 - z46;
        prev15 = b75 + z46;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

