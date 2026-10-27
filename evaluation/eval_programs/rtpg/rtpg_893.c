// RTPG_893: vars=5 stmts=8
int idx_arr[16];
void test_func(void) {
    int v98 = 18;
    int out49 = 3;
    int sum80 = -46;
    int cur13 = 64;
    int cur50 = 26;
    int i;
    for (i = 0; i < 42; i++) {
        cur13 = xn[idx_arr[i]];
        cur50 = cur50 - 28;
        sum80 = sum80 + cur50;
        cur50 = cur50 - sum80;
        v98 = cur50 + 57;
        cur50 = out49 + cur50;
        out49 = sum80;
        v98 = cur50 + out49;
        out49 = sum80 + out49;
    }
}
int main() { test_func(); return 0; }

