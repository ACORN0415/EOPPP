// RTPG_3233: vars=12 stmts=12
int xn[32];
int yo[32];
enum State { ON, SLOW, OFF };
void test_func(void) {
    int sum75 = 3;
    int val80 = 42;
    int dat37 = 1;
    int a13 = 30100;
    int prev26 = 50;
    int out25 = 55764;
    int sum32 = -50;
    int val94 = 10;
    int y81 = 41131;
    int z87 = 4;
    int x40 = 12;
    int v24 = 26;
    enum State st = ON;
    int i;
    for (i = 0; i < 32; i++) {
        sum75 = xn[i];
        val94 = val94;
        z87 = sum75 + val80;
        val94 = val94 - 3;
        prev26 = prev26 - 1;
        v24 = val80 + 14360;
        a13 = v24;
        z87 = a13 - -21;
        val80 = x40 + sum75;
        v24 = sum75 + val80;
        v24 = a13 + v24;
        prev26 = sum32 + val80;
        v24 = a13 + 42;
        yo[i] = sum32;
    }
}
int main() { test_func(); return 0; }

