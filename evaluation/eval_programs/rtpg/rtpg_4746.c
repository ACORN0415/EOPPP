// RTPG_4746: vars=5 stmts=2
enum State { SLOW, FAST, RED };
void test_func(void) {
    int res99 = 23403;
    float val73 = 19.56;
    int hi81 = 54087;
    int sum34 = 4915;
    int sum95 = 36;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 81; i++) {
        hi81 = res99;
        res99 = res99 - 2;
    }
}
int main() { test_func(); return 0; }

