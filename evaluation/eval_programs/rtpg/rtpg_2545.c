// RTPG_2545: vars=3 stmts=4
void test_func(void) {
    double out52 = 4.48;
    float hi81 = 58.17;
    float dat6 = 11.12;
    int i;
    for (i = 0; i < 55; i++) {
        out52 = dat6 + 81;
        dat6 = dat6 + hi81;
        out52 = out52 + 3;
        dat6 = dat6;
        if (hi81 > 63) goto done;
    }
done:
    hi81 = 0;
}
int main() { test_func(); return 0; }

