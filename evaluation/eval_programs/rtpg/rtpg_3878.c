// RTPG_3878: vars=3 stmts=2
int xn[16];
int yo[16];
enum State { BLUE, GREEN, RED };
void test_func(void) {
    int y62 = 6;
    int b0 = 55087;
    int lo16 = 25416;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 16; i++) {
        y62 = xn[i];
        y62 = y62 - 1;
        b0 = lo16 - b0;
        if (lo16 > -17) {
        b0 = b0 - 30571;
        }
        yo[i] = y62;
    }
}
int main() { test_func(); return 0; }

