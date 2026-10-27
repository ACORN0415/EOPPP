// RTPG_5160: vars=5 stmts=11
void test_func(void) {
    int hi40 = -6;
    int hi61 = -7;
    float b75 = 32.99;
    double prev15 = 27.41;
    int z46 = 19;
    int *ptr = &z46;
    int i;
    for (i = 0; i < 37; i++) {
        z46 = b75 - prev15;
        hi61 = prev15 + hi61;
        prev15 = prev15 + 2;
        hi40 = b75 + hi61;
        z46 = z46 - b75;
        b75 = b75 - 1;
        hi40 = b75 + z46;
        z46 = b75 - 85;
        hi40 = hi40 + z46;
        hi40 = z46 - prev15;
        b75 = z46 + prev15;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

