// RTPG_716: vars=9 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int tmp14 = 38140;
    int dat90 = 6;
    int y5 = 11;
    int y59 = 45148;
    int prev47 = 33971;
    int cnt36 = 58385;
    int x18 = 38;
    int acc26 = 60;
    int x88 = 39;
    int i;
    for (i = 0; i < 32; i++) {
        prev47 = xn[i];
        dat90 = acc26 - prev47;
        y59 = y59 + tmp14;
        x88 = prev47 + dat90;
        x88 = dat90;
        x88 = prev47 + y5;
        y59 = x18;
        if (tmp14 <= 2) {
        x18 = prev47 - 66;
        }
        yo[i] = x88;
    }
}
int main() { test_func(); return 0; }

