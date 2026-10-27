// RTPG_4447: vars=3 stmts=3
int xn[16];
int yo[16];
enum State { RED, ON, OFF };
void test_func(void) {
    int c6 = 1;
    int a32 = 2;
    int tmp68 = 64055;
    enum State st = RED;
    int i;
    for (i = 0; i < 16; i++) {
        a32 = xn[i];
        tmp68 = tmp68 + a32;
        c6 = a32 + a32;
        tmp68 = tmp68 - 5;
        if (a32 == 4) {
        c6 = c6 + a32;
        }
        yo[i] = tmp68;
    }
}
int main() { test_func(); return 0; }

