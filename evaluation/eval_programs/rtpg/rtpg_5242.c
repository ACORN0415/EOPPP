// RTPG_5242: vars=6 stmts=9
enum State { ON, BLUE, FAST };
void test_func(void) {
    int tmp99 = 59;
    int acc7 = 15945;
    int cur71 = 51270;
    int out15 = 1;
    int prev11 = 0;
    int sum62 = 0;
    enum State st = ON;
    int i;
    for (i = 0; i < 35; i++) {
        prev11 = acc7 - sum62;
        acc7 = tmp99 ^ sum62;
        sum62 = sum62 - 2;
        sum62 = tmp99 - 55;
        prev11 = cur71 / acc7;
        sum62 = tmp99;
        out15 = cur71 - prev11;
        prev11 = cur71 / out15;
        tmp99 = sum62 & tmp99;
    }
}
int main() { test_func(); return 0; }

