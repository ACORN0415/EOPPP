// RTPG_9266: vars=6 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int lo71 = 55071;
    int b62 = 70;
    int hi68 = 15;
    int prev73 = -48;
    int cur53 = -46;
    int prev32 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        prev73 = xn[i];
        b62 = xn[idx_arr[i]];
        hi68 = prev32 + prev73;
        prev32 = prev73 + hi68;
        cur53 = prev73 + b62;
        cur53 = cur53 + lo71;
        if (hi68 != -24) {
        cur53 = lo71;
        }
        yo[i] = hi68;
    }
}
int main() { test_func(); return 0; }

