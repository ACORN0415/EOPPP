// RTPG_2135: vars=5 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int dat46 = 61065;
    int dat83 = 4;
    int b69 = 33675;
    int dat33 = 30;
    int tmp7 = 75;
    int i;
    for (i = 0; i < 16; i++) {
        dat83 = xn[i];
        dat83 = dat83 - dat83;
        dat83 = dat33 + b69;
        dat46 = b69 - dat83;
        b69 = dat46 + 6842;
        yo[i] = dat83;
    }
}
int main() { test_func(); return 0; }

