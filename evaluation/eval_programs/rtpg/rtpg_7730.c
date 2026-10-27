// RTPG_7730: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int res97 = 0;
    int lo74 = 3;
    int res91 = 7;
    int tmp60 = 1;
    int a0 = 7;
    int a29 = 55097;
    int dat8 = 29;
    int c34 = 58250;
    int tmp14 = 74;
    int i;
    for (i = 0; i < 16; i++) {
        dat8 = xn[i];
        dat8 = dat8 + 74;
        lo74 = dat8 - c34;
        res97 = dat8 + lo74;
        res91 = tmp14 + 3;
        tmp60 = a29 - a0;
        if (c34 < 94) {
        a29 = res91;
        }
        yo[i] = tmp60;
    }
}
int main() { test_func(); return 0; }

