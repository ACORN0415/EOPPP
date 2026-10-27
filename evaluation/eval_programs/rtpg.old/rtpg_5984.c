// RTPG_5984: vars=6 stmts=10
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int v20 = 35659;
    int a78 = 66;
    int tmp12 = 67;
    int out73 = 2;
    int sum72 = 42933;
    int x7 = -36;
    int i;
    for (i = 0; i < 32; i++) {
        v20 = xn[i];
        x7 = xn[idx_arr[i]];
        x7 = x7 + 2;
        v20 = tmp12 + tmp12;
        sum72 = x7 + sum72;
        x7 = tmp12 + 53602;
        out73 = sum72 + x7;
        a78 = v20 - a78;
        sum72 = sum72 + sum72;
        out73 = v20 - out73;
        a78 = x7 + v20;
        a78 = out73 - 14411;
        if (x7 >= 49) {
        tmp12 = tmp12 - out73;
        }
        yo[i] = tmp12;
    }
}
int main() { test_func(); return 0; }

