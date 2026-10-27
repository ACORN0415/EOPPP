// RTPG_2432: vars=3 stmts=2
void test_func(void) {
    double v87 = 41.06;
    int b48 = 2;
    float x99 = 66.92;
    int i;
    for (i = 0; i < 60; i++) {
        b48 = b48 - 5;
        x99 = v87;
        if (b48 > 4) goto done;
        if (x99 <= -21) {
        x99 = b48;
        }
    }
done:
    b48 = 0;
}
int main() { test_func(); return 0; }

