// RTPG_6129: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    float acc88 = 91.34;
    int sum87 = 91;
    int c54 = 3;
    int lo80 = 52955;
    float tmp76 = 92.63;
    float lo61 = 56.03;
    double y94 = 33.57;
    float cnt21 = 70.42;
    int i;
    for (i = 0; i < 32; i++) {
        tmp76 = xn[i];
        lo61 = lo61 - 3;
        lo80 = tmp76 - 2;
        sum87 = lo61 - 64;
        lo61 = c54 + tmp76;
        tmp76 = sum87 - c54;
        acc88 = sum87 + cnt21;
        if (cnt21 > 18) goto done;
        if (cnt21 >= 34) {
        y94 = y94 + 2;
        }
        yo[i] = c54;
    }
done:
    y94 = 0;
}
int main() { test_func(); return 0; }

