// RTPG_3287: vars=3 stmts=8
enum State { RED, BLUE, FAST };
void test_func(void) {
    int sum49 = -44;
    int z21 = 37091;
    int out9 = -9;
    enum State st = RED;
    int i;
    for (i = 0; i < 79; i++) {
        sum49 = out9 + 1;
        sum49 = out9 + out9;
        out9 = z21 - out9;
        sum49 = sum49;
        sum49 = out9 + z21;
        out9 = z21 + 7;
        sum49 = out9 - z21;
        out9 = out9 - sum49;
        if (sum49 != 68) {
        sum49 = out9;
        }
    }
}
int main() { test_func(); return 0; }

