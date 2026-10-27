// RTPG_9196: vars=7 stmts=5
int xn[32];
int yo[32];
enum State { OFF, ON, GREEN };
void test_func(void) {
    int a72 = 7;
    int c91 = 4;
    int b86 = -3;
    int cnt34 = 0;
    int prev38 = -22;
    int lo38 = 6;
    int out11 = 8;
    enum State st = OFF;
    int i;
    for (i = 0; i < 32; i++) {
        cnt34 = xn[i];
        lo38 = b86 & lo38;
        a72 = a72 + c91;
        b86 = c91 - b86;
        prev38 = prev38 + lo38;
        lo38 = c91 - b86;
        if (out11 > -10) {
        lo38 = lo38 + 1;
        }
        yo[i] = c91;
    }
}
int main() { test_func(); return 0; }

