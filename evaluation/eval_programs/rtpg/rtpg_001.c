// RTPG_1: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int y14 = 50433;
    int b80 = 9;
    int c87 = 15;
    int i;
    for (i = 0; i < 16; i++) {
        y14 = xn[i];
        b80 = y14 + b80;
        c87 = c87;
        y14 = y14 + 3;
        c87 = c87 + 2;
        b80 = c87 + 9;
        b80 = y14;
        y14 = c87 + 43;
        yo[i] = y14;
    }
}
int main() { test_func(); return 0; }

