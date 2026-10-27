// RTPG_2262: vars=4 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int hi60 = 22790;
    int acc33 = 71;
    int y61 = 3572;
    int cur18 = 59766;
    int i;
    for (i = 0; i < 32; i++) {
        hi60 = xn[i];
        cur18 = xn[idx_arr[i]];
        acc33 = hi60 + 2;
        y61 = y61 - 3;
        yo[i] = cur18;
    }
}
int main() { test_func(); return 0; }

