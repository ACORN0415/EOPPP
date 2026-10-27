// RTPG_8903: vars=7 stmts=8
int xn[64];
int yo[64];
int idx_arr[64];
enum State { OFF, RED, FAST };
void test_func(void) {
    int c32 = 27028;
    int dat25 = 61969;
    int hi72 = 22152;
    int a48 = 61405;
    int a72 = 37788;
    int sum6 = 90;
    int y17 = 39441;
    enum State st = OFF;
    int i;
    for (i = 0; i < 64; i++) {
        y17 = xn[i];
        sum6 = xn[idx_arr[i]];
        sum6 = hi72 - 10;
        dat25 = y17;
        c32 = a48 + 10;
        dat25 = c32;
        hi72 = sum6 + 6;
        a48 = sum6 + y17;
        y17 = sum6;
        y17 = y17 + 5;
        yo[i] = y17;
    }
}
int main() { test_func(); return 0; }

