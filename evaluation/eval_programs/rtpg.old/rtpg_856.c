// RTPG_856: vars=5 stmts=3
enum State { ON, GREEN, BLUE };
void test_func(void) {
    int res18 = 71;
    int acc52 = -6;
    int sum55 = -12;
    int cur39 = 5;
    int acc10 = 27667;
    enum State st = ON;
    int i;
    for (i = 0; i < 78; i++) {
        acc10 = sum55 + res18;
        sum55 = sum55 - 4;
        cur39 = res18;
    }
}
int main() { test_func(); return 0; }

