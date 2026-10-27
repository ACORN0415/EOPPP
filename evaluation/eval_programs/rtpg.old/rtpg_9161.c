// RTPG_9161: vars=8 stmts=6
int xn[64];
int yo[64];
enum State { GREEN, RED, SLOW };
void test_func(void) {
    int v53 = 10012;
    int y8 = 67;
    int a50 = -38;
    int tmp66 = 36004;
    int sum96 = 57888;
    int acc52 = 43;
    int b10 = 6;
    int hi42 = 18;
    enum State st = GREEN;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 57;
    int sv1 = 0;
    int h2 = 7;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y8 = xn[i];
        tmp66 = a50 - 40610;
        b10 = y8 - a50;
        sum96 = sum96 * -14;
        a50 = acc52 - v53;
        b10 = hi42 + tmp66;
        acc52 = acc52 + 1;
        yo[i] = hi42;
    }
}
int main() { test_func(); return 0; }

