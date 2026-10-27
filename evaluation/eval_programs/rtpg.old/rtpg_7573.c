// RTPG_7573: vars=3 stmts=8
void test_func(void) {
    float v23 = 53.74;
    double hi43 = 66.68;
    double z25 = 32.64;
    int i;
    for (i = 0; i < 15; i++) {
        hi43 = hi43 - 5;
        hi43 = hi43 / z25;
        v23 = hi43;
        hi43 = v23 | z25;
        z25 = v23 ^ hi43;
        z25 = hi43 + 10;
        v23 = v23 - 4;
        v23 = v23 % z25;
    }
}
int main() { test_func(); return 0; }

