// RTPG_2064: vars=9 stmts=9
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int z17 = 41367;
    int cur69 = -12;
    int v61 = 54865;
    int res71 = 27245;
    int hi44 = 3;
    int tmp4 = 4;
    int tmp47 = 25;
    int z53 = 3;
    int z81 = 79;
    int i;
    for (i = 0; i < 16; i++) {
        tmp4 = xn[i];
        tmp4 = xn[idx_arr[i]];
        res71 = z17 - 45;
        z53 = z53 - z81;
        hi44 = z81;
        z17 = tmp4 - v61;
        tmp4 = v61 - hi44;
        hi44 = tmp47 + v61;
        z17 = z17 - 2;
        cur69 = tmp4 + 47354;
        tmp47 = z17 + z53;
        if (tmp47 <= 45) {
        z17 = tmp47;
        }
        yo[i] = res71;
    }
}
int main() { test_func(); return 0; }

