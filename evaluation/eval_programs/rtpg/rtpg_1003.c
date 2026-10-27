// RTPG_1003: vars=3 stmts=11
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int dat25 = -10;
    int res60 = 28;
    int hi19 = -34;
    int i;
    for (i = 0; i < 16; i++) {
        hi19 = xn[i];
        dat25 = xn[idx_arr[i]];
        hi19 = hi19;
        dat25 = dat25;
        dat25 = dat25;
        dat25 = res60 % hi19;
        res60 = dat25 + res60;
        res60 = dat25 - dat25;
        hi19 = res60 - 64;
        res60 = res60 % dat25;
        hi19 = dat25 / res60;
        dat25 = hi19 % dat25;
        res60 = hi19 + res60;
        if (dat25 == -45) {
        res60 = res60 - 4;
        }
        yo[i] = dat25;
    }
}
int main() { test_func(); return 0; }

