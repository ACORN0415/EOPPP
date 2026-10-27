// RTPG_8746: vars=6 stmts=11
int xn[64];
int yo[64];
enum State { FAST, ON, OFF };
void test_func(void) {
    int sum26 = 10;
    int lo0 = 37;
    int y50 = 49;
    float res18 = 96.87;
    double cnt65 = 20.91;
    int acc31 = 1;
    enum State st = FAST;
    int *ptr = &sum26;
    int i;
    for (i = 0; i < 64; i++) {
        lo0 = xn[i];
        acc31 = lo0 - res18;
        cnt65 = res18 ^ y50;
        y50 = sum26;
        acc31 = y50 | lo0;
        acc31 = y50 + 61071;
        cnt65 = cnt65 + 2;
        sum26 = sum26 - y50;
        res18 = cnt65 | sum26;
        cnt65 = cnt65 | sum26;
        lo0 = acc31 % sum26;
        y50 = acc31 - res18;
        *ptr = *ptr + 5;
        yo[i] = cnt65;
    }
}
int main() { test_func(); return 0; }

