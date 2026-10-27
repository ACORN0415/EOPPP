// RTPG_2912: vars=4 stmts=9
enum State { BLUE, OFF, SLOW };
void test_func(void) {
    int c15 = 6;
    int res65 = 33222;
    int sum23 = 4283;
    int y97 = 6;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 100; i++) {
        switch (y97) {
            case 0: sum23 = -2; break;
            case 1: y97 = 13; break;
            case 2: c15 = 37; break;
            default: break;
        }
        y97 = y97 + 1;
    }
}
int main() { test_func(); return 0; }

