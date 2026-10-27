// RTPG_3094: vars=6 stmts=4
enum State { OFF, ON, SLOW };
void test_func(void) {
    int cnt74 = 26;
    int lo49 = 0;
    int c69 = 6;
    int prev29 = 44;
    int res44 = 25;
    int dat44 = 31;
    enum State st = OFF;
    int i;
    for (i = 0; i < 74; i++) {
        dat44 = res44 / cnt74;
        c69 = c69 - 3;
        prev29 = dat44 + prev29;
        cnt74 = cnt74 ^ dat44;
    }
}
int main() { test_func(); return 0; }

