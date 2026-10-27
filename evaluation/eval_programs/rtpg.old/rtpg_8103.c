// RTPG_8103: vars=5 stmts=9
enum State { GREEN, ON, RED };
void test_func(void) {
    int prev40 = 88;
    int dat99 = 79;
    int a3 = -50;
    int acc37 = 65;
    int tmp4 = 79;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 57; i++) {
        prev40 = acc37 - prev40;
        acc37 = dat99 + prev40;
        a3 = prev40 + 32138;
        prev40 = prev40;
        a3 = dat99;
        tmp4 = tmp4 + 3;
        tmp4 = a3 + 9469;
        prev40 = a3 - dat99;
        dat99 = acc37 + 16861;
        if (acc37 != -41) {
        a3 = prev40;
        }
    }
}
int main() { test_func(); return 0; }

