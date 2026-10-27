// RTPG_2039: vars=4 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int prev12 = -28;
    int hi60 = 82;
    int res7 = 9;
    int res56 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        prev12 = xn[i];
        res7 = xn[idx_arr[i]];
        hi60 = prev12 + 46441;
        prev12 = prev12 + 1;
        res7 = res56 + res7;
        prev12 = hi60 - 8;
        if (res56 > 75) {
        prev12 = hi60 + 2246;
        }
        yo[i] = res56;
    }
}
int main() { test_func(); return 0; }

