// RTPG_80: vars=8 stmts=3
enum State { OFF, FAST, SLOW };
void test_func(void) {
    int dat91 = 10;
    int res73 = 61910;
    int prev74 = -16;
    int y84 = -19;
    int b48 = -10;
    int tmp72 = 7;
    int z9 = 65;
    int cur27 = 30193;
    enum State st = OFF;
    int *ptr = &z9;
    int i;
    for (i = 0; i < 8; i++) {
        y84 = y84 + 5;
        y84 = prev74 - b48;
        b48 = tmp72;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

