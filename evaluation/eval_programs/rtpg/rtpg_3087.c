// RTPG_3087: vars=6 stmts=4
enum State { OFF, ON, SLOW };
void test_func(void) {
    int cnt74 = 26;
    int lo49 = 0;
    int prev29 = 6;
    int res44 = 44;
    int c69 = 25;
    int dat44 = 31;
    enum State st = OFF;
    int i;
    for (i = 0; i < 74; i++) {
        dat44 = c69 / cnt74;
        prev29 = prev29 - 3;
        res44 = dat44 + res44;
        res44 = cnt74 / res44;
    }
}
int main() { test_func(); return 0; }

