// RTPG_8188: vars=3 stmts=6
int xn[16];
int yo[16];
enum State { OFF, FAST, GREEN };
void test_func(void) {
    int y22 = 1393;
    int res19 = 10;
    int tmp12 = 10;
    enum State st = OFF;
    int i;
    for (i = 0; i < 16; i++) {
        y22 = xn[i];
        res19 = tmp12 - res19;
        res19 = y22;
        tmp12 = y22;
        res19 = res19;
        tmp12 = res19;
        y22 = res19 - 25;
        yo[i] = tmp12;
    }
}
int main() { test_func(); return 0; }

