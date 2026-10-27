// RTPG_338: vars=6 stmts=4
enum State { OFF, FAST, BLUE };
void test_func(void) {
    int hi16 = 3;
    int y65 = 0;
    int c44 = 78;
    int acc71 = 37373;
    int hi46 = 10;
    int dat44 = 48069;
    enum State st = OFF;
    int *ptr = &c44;
    int i;
    for (i = 0; i < 75; i++) {
        hi16 = hi16 - 5;
        y65 = acc71 + 17;
        dat44 = hi16 + c44;
        c44 = y65 + c44;
        *ptr = *ptr + 2;
        if (acc71 != 54) {
        acc71 = dat44 + hi46;
        }
    }
}
int main() { test_func(); return 0; }

