// RTPG_339: vars=6 stmts=4
enum State { OFF, FAST, BLUE };
void test_func(void) {
    int hi46 = 3;
    int c44 = 0;
    int y65 = 78;
    int hi16 = 37373;
    int dat44 = 10;
    int acc71 = 48069;
    enum State st = OFF;
    int *ptr = &y65;
    int i;
    for (i = 0; i < 75; i++) {
        hi46 = hi46 - 5;
        c44 = hi16 + 17;
        acc71 = hi46 + y65;
        y65 = c44 + y65;
        *ptr = *ptr + 2;
        if (hi16 != 54) {
        hi16 = acc71 + dat44;
        }
    }
}
int main() { test_func(); return 0; }

