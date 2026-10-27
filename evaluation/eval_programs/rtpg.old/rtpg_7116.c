// RTPG_7116: vars=4 stmts=5
enum State { BLUE, SLOW, RED };
void test_func(void) {
    int prev12 = 10;
    int y16 = -45;
    int a51 = 34;
    int sum1 = 29;
    enum State st = BLUE;
    int *ptr = &prev12;
    int i;
    for (i = 0; i < 55; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        y16 = y16;
        prev12 = prev12 + 3;
        y16 = y16 - 5;
        y16 = y16 - 1;
        y16 = prev12 + sum1;
        }
    }
}
int main() { test_func(); return 0; }

