// RTPG_4709: vars=7 stmts=2
int idx_arr[32];
void test_func(void) {
    float prev16 = 44.91;
    int val94 = 6;
    float tmp58 = 75.22;
    int dat12 = 46905;
    int out81 = 26;
    int z46 = 8;
    int res96 = 6;
    int i;
    for (i = 0; i < 48; i++) {
        tmp58 = xn[idx_arr[i]];
        dat12 = tmp58 + out81;
        z46 = out81 - 48556;
        if (val94 <= 73) {
        dat12 = prev16;
        }
    }
}
int main() { test_func(); return 0; }

