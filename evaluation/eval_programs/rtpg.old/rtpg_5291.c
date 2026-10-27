// RTPG_5291: vars=4 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int sum39 = 96;
    int a34 = 41;
    int tmp78 = 7;
    int out5 = 53936;
    int i;
    for (i = 0; i < 16; i++) {
        a34 = xn[i];
        tmp78 = xn[idx_arr[i]];
        sum39 = sum39 + 2;
        sum39 = tmp78 - tmp78;
        a34 = a34 + a34;
        a34 = a34 + 2;
        a34 = tmp78 + 92;
        if (out5 >= 56) {
        out5 = sum39 + 21;
        }
        yo[i] = tmp78;
    }
}
int main() { test_func(); return 0; }

