// RTPG_1396: vars=6 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int out6 = 29813;
    int v13 = 61166;
    int cur72 = -12;
    int cur21 = 6;
    int dat2 = 58;
    int acc52 = 45;
    int h0 = 20;
    int sv0 = 0;
    int h1 = -42;
    int sv1 = 0;
    int i;
    for (i = 0; i < 77; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        cur72 = dat2 + cur21;
        dat2 = cur21 + cur21;
        out6 = cur72;
        v13 = cur72 + 8;
        }
    }
}
int main() { test_func(); return 0; }

