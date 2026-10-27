// RTPG_8827: vars=6 stmts=12
void test_func(void) {
    int sum95 = 4;
    int val38 = 74;
    float out5 = 44.96;
    int b26 = 46945;
    int sum42 = -23;
    double b76 = 57.07;
    int i;
    for (i = 0; i < 66; i++) {
        out5 = out5 + val38;
        val38 = b76 - b26;
        sum95 = val38 - 1;
        b76 = b26;
        out5 = b26 - val38;
        sum95 = sum95 - 3;
        out5 = b76 + b26;
        sum42 = sum42 - 2;
        out5 = out5 - 5;
        out5 = sum95 + sum95;
        b26 = out5 + val38;
        sum42 = val38 - b26;
    }
}
int main() { test_func(); return 0; }

