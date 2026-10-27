// RTPG_5670: vars=4 stmts=9
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int y60 = 1;
    int x98 = 39;
    int cur15 = 0;
    int dat67 = 52076;
    int i;
    for (i = 0; i < 16; i++) {
        dat67 = xn[i];
        x98 = xn[idx_arr[i]];
        cur15 = cur15 + 5;
        cur15 = cur15 - 2;
        dat67 = dat67 - 2;
        y60 = dat67 - -21;
        cur15 = cur15 + y60;
        cur15 = cur15 + 3;
        cur15 = y60 + cur15;
        y60 = dat67 - y60;
        y60 = cur15;
        if (cur15 <= 92) {
        y60 = y60 - 4;
        }
        yo[i] = x98;
    }
}
int main() { test_func(); return 0; }

