// RTPG_1096: vars=6 stmts=12
int xn[16];
int yo[16];
enum State { OFF, ON, BLUE };
void test_func(void) {
    int c77 = -47;
    int b34 = 8;
    int hi47 = 18378;
    int tmp77 = 5;
    int dat92 = 53216;
    int acc28 = 33;
    enum State st = OFF;
    int i;
    for (i = 0; i < 16; i++) {
        dat92 = xn[i];
        hi47 = tmp77 - dat92;
        c77 = dat92 + 5;
        tmp77 = tmp77 + 1;
        b34 = hi47 - tmp77;
        b34 = hi47 + b34;
        hi47 = dat92 - b34;
        hi47 = tmp77;
        hi47 = tmp77 + dat92;
        hi47 = hi47;
        dat92 = dat92 - 1;
        tmp77 = c77;
        c77 = b34 - hi47;
        yo[i] = hi47;
    }
}
int main() { test_func(); return 0; }

