// RTPG_6326: vars=4 stmts=9
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int dat1 = 33;
    int cur90 = 0;
    int sum24 = 43675;
    int sum74 = 9;
    int h0 = 23127;
    int sv0 = 0;
    int h1 = 47;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        dat1 = xn[i];
        dat1 = xn[idx_arr[i]];
        sum74 = dat1;
        cur90 = sum74 + cur90;
        sum74 = sum74 + 4;
        sum74 = sum74 + dat1;
        sum24 = cur90 * 61734;
        dat1 = cur90 - sum24;
        sum24 = sum24 * 13;
        dat1 = sum74;
        sum24 = sum74 - 8;
        yo[i] = dat1;
    }
}
int main() { test_func(); return 0; }

