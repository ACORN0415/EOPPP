// RTPG_7838: vars=3 stmts=8
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int x71 = 16;
    int dat18 = 24206;
    int z33 = 9;
    int i;
    for (i = 0; i < 32; i++) {
        z33 = xn[i];
        z33 = xn[idx_arr[i]];
        x71 = x71 + 3;
        z33 = dat18 - 73;
        z33 = z33 - x71;
        dat18 = dat18 - 4;
        z33 = z33 - dat18;
        dat18 = z33;
        dat18 = z33 - x71;
        dat18 = x71 + 9;
        yo[i] = x71;
    }
}
int main() { test_func(); return 0; }

