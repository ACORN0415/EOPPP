// RTPG_3009: vars=3 stmts=7
enum State { SLOW, ON, OFF };
void test_func(void) {
    int tmp44 = 40121;
    int z74 = -4;
    int out27 = 6;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 96; i++) {
        z74 = z74;
        out27 = out27 - out27;
        out27 = z74;
        out27 = z74;
        out27 = out27 + -49;
        z74 = out27 - 25151;
        tmp44 = z74;
    }
}
int main() { test_func(); return 0; }

