// RTPG_1: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int b80 = 50433;
    int y14 = 9;
    int c87 = 15;
    int i;
    for (i = 0; i < 16; i++) {
        b80 = xn[i];
        y14 = b80 + y14;
        c87 = c87;
        b80 = b80 + 3;
        c87 = c87 + 2;
        y14 = c87 + 9;
        y14 = b80;
        b80 = c87 + 43;
        yo[i] = b80;
    }
}
int main() { test_func(); return 0; }

