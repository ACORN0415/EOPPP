// RTPG_9784: vars=10 stmts=3
int xn[32];
int yo[32];
enum State { RED, ON, BLUE };
void test_func(void) {
    int cnt89 = 75;
    int c7 = 60;
    int cnt20 = 36702;
    int lo91 = 41981;
    int cnt4 = 0;
    int y11 = 1;
    int a89 = 51546;
    int c22 = 22;
    int tmp42 = 1;
    int c28 = 10;
    enum State st = RED;
    int i;
    for (i = 0; i < 32; i++) {
        a89 = xn[i];
        c28 = a89 + lo91;
        y11 = cnt89 + cnt20;
        cnt89 = cnt89 + 2;
        if (cnt20 == 10) {
        cnt20 = a89 - c28;
        }
        yo[i] = cnt4;
    }
}
int main() { test_func(); return 0; }

