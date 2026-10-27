// RTPG_5073: vars=5 stmts=12
void test_func(void) {
    int cnt50 = 43;
    int lo1 = 51;
    int cnt20 = 17;
    int cur41 = 62309;
    int x51 = 10;
    int i;
    for (i = 0; i < 21; i++) {
        lo1 = cur41;
        cnt20 = cnt20 + 4;
        x51 = cur41 + lo1;
        lo1 = cnt50 + 47;
        x51 = cnt20 - cnt50;
        lo1 = x51 + cur41;
        x51 = x51 + 2;
        cnt50 = cnt50 + 3;
        cur41 = cnt50 + cnt50;
        lo1 = cnt50 - 5;
        x51 = lo1;
        lo1 = cur41 + 46;
        if (cnt20 == 72) {
        x51 = cur41 + lo1;
        }
    }
}
int main() { test_func(); return 0; }

