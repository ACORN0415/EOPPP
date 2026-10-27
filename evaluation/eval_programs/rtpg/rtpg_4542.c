// RTPG_4542: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int acc50 = 43983;
    int y10 = 16131;
    int dat71 = 3;
    int c43 = 31;
    int y60 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        acc50 = xn[i];
        y10 = y60 + y10;
        y10 = dat71;
        if (dat71 > -16) {
        acc50 = c43;
        }
        yo[i] = y60;
    }
}
int main() { test_func(); return 0; }

