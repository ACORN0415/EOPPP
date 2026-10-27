// RTPG_8726: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int x10 = 47;
    int v61 = 23;
    int sum46 = 9;
    int tmp15 = -36;
    int i;
    for (i = 0; i < 64; i++) {
        tmp15 = xn[i];
        tmp15 = v61 - tmp15;
        sum46 = sum46 + 1;
        v61 = tmp15 + sum46;
        x10 = tmp15;
        v61 = tmp15 + v61;
        yo[i] = v61;
    }
}
int main() { test_func(); return 0; }

