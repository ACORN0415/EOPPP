// RTPG_8229: vars=3 stmts=7
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int a96 = 74;
    int x93 = 8;
    int b16 = 4;
    int i;
    for (i = 0; i < 64; i++) {
        b16 = xn[i];
        x93 = xn[idx_arr[i]];
        b16 = b16 - x93;
        a96 = a96 + 8;
        a96 = a96 - x93;
        b16 = a96 - x93;
        x93 = a96;
        x93 = a96;
        a96 = a96 + 4;
        if (b16 != 93) {
        a96 = x93 + b16;
        }
        yo[i] = a96;
    }
}
int main() { test_func(); return 0; }

