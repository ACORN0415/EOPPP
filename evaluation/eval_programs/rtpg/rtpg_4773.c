// RTPG_4773: vars=3 stmts=4
int xn[16];
int yo[16];
enum State { OFF, RED, FAST };
void test_func(void) {
    int tmp94 = -24;
    int acc5 = 45;
    int sum99 = 10;
    enum State st = OFF;
    int i;
    for (i = 0; i < 16; i++) {
        tmp94 = xn[i];
        tmp94 = sum99 + 25;
        acc5 = sum99 + acc5;
        tmp94 = sum99 + tmp94;
        sum99 = tmp94 + acc5;
        if (sum99 < 21) {
        tmp94 = tmp94 + 3;
        }
        yo[i] = sum99;
    }
}
int main() { test_func(); return 0; }

