// RTPG_1950: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int tmp42 = 15597;
    int lo60 = 35;
    int acc62 = -18;
    int lo55 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        tmp42 = xn[i];
        tmp42 = lo60 + lo55;
        lo55 = lo55 + 5;
        lo55 = lo60;
        lo60 = acc62 + 52274;
        acc62 = acc62 + acc62;
        if (lo60 < -42) {
        acc62 = tmp42 + 18649;
        }
        yo[i] = lo60;
    }
}
int main() { test_func(); return 0; }

