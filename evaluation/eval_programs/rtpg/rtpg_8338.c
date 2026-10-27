// RTPG_8338: vars=3 stmts=7
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int x93 = 74;
    int b16 = 8;
    int a96 = 4;
    int i;
    for (i = 0; i < 64; i++) {
        a96 = xn[i];
        b16 = xn[idx_arr[i]];
        a96 = a96 - b16;
        x93 = x93 + 8;
        x93 = x93 - b16;
        a96 = x93 - b16;
        b16 = x93;
        b16 = x93;
        x93 = x93 + 4;
        if (a96 != 93) {
        x93 = b16 + a96;
        }
        yo[i] = x93;
    }
}
int main() { test_func(); return 0; }

