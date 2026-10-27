// RTPG_2877: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int dat60 = 35;
    int dat38 = 1;
    int sum70 = 55;
    int c81 = 3;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 62;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat38 = xn[i];
        dat60 = c81 * -1;
        dat38 = sum70 * 10;
        if (sum70 > 15095) goto done;
        if (dat38 > -40) {
        sum70 = dat38 - 24;
        }
        yo[i] = dat60;
    }
done:
    dat38 = 0;
}
int main() { test_func(); return 0; }

