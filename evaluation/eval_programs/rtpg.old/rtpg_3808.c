// RTPG_3808: vars=4 stmts=4
enum State { BLUE, GREEN, ON };
void test_func(void) {
    float b21 = 17.75;
    int acc66 = 5;
    int val15 = 31;
    int val76 = 14528;
    enum State st = BLUE;
    int *ptr = &b21;
    int i;
    for (i = 0; i < 26; i++) {
        b21 = b21 + val76;
        b21 = b21 - 1;
        acc66 = acc66 + 3;
        b21 = val15;
        *ptr = *ptr + 5;
        if (b21 > -49) {
        val76 = val15 - b21;
        }
    }
}
int main() { test_func(); return 0; }

