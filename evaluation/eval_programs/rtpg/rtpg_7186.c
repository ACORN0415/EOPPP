// RTPG_7186: vars=4 stmts=5
enum State { BLUE, SLOW, RED };
void test_func(void) {
    int a51 = 10;
    int y16 = -45;
    int sum1 = 34;
    int prev12 = 29;
    enum State st = BLUE;
    int *ptr = &a51;
    int i;
    for (i = 0; i < 55; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        y16 = y16;
        a51 = a51 + 3;
        y16 = y16 - 5;
        y16 = y16 - 1;
        y16 = a51 + prev12;
        }
    }
}
int main() { test_func(); return 0; }

