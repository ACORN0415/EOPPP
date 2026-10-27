// RTPG_7237: vars=6 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int dat48 = -23;
    int y2 = 60614;
    int tmp58 = 45138;
    double cur84 = 29.47;
    double hi12 = 2.82;
    float out2 = 59.73;
    int i;
    for (i = 0; i < 16; i++) {
        y2 = xn[i];
        hi12 = out2 - 6;
        tmp58 = cur84 + dat48;
        cur84 = cur84 - 5;
        tmp58 = tmp58 - cur84;
        y2 = tmp58 - dat48;
        y2 = cur84 - y2;
        yo[i] = cur84;
    }
}
int main() { test_func(); return 0; }

