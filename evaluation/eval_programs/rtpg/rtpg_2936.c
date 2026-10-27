// RTPG_2936: vars=6 stmts=2
int xn[16];
int yo[16];
enum State { BLUE, FAST, ON };
void test_func(void) {
    int cur40 = -17;
    int sum59 = -24;
    int lo85 = 4;
    float prev96 = 26.05;
    double dat72 = 24.74;
    int tmp38 = 65167;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 16; i++) {
        sum59 = xn[i];
        dat72 = sum59 + dat72;
        dat72 = prev96 - 6;
        yo[i] = dat72;
    }
}
int main() { test_func(); return 0; }

