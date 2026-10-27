// RTPG_5157: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int dat0 = 55;
    int val3 = -19;
    int prev37 = 15;
    int out34 = 35880;
    int x9 = 20;
    int i;
    for (i = 0; i < 97; i++) {
        switch (dat0) {
            case 0: val3 = 61660; break;
            case 1: val3 = 47575; break;
            case 2: dat0 = 1764; break;
            case 3: out34 = 1; break;
            default: break;
        }
        dat0 = dat0 + 1;
    }
}
int main() { test_func(); return 0; }

