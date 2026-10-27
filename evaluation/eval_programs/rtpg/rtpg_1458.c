// RTPG_1458: vars=10 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int hi5 = 53;
    int v20 = -16;
    int dat17 = 86;
    int b68 = 83;
    int v9 = 5;
    float lo49 = 3.60;
    int sum81 = 96;
    int acc29 = 2;
    int y96 = 47550;
    int c28 = 33896;
    int i;
    for (i = 0; i < 64; i++) {
        lo49 = xn[i];
        acc29 = dat17 - lo49;
        hi5 = hi5 + 5;
        dat17 = dat17 + 4;
        lo49 = v9;
        hi5 = hi5 - 2;
        sum81 = sum81 - 4;
        sum81 = sum81 - 3;
        v20 = lo49;
        v9 = v20;
        v20 = v20 - 1;
        sum81 = b68 + lo49;
        yo[i] = v20;
    }
}
int main() { test_func(); return 0; }

