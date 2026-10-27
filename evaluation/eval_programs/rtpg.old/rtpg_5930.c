// RTPG_5930: vars=13 stmts=6
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int y80 = 17;
    int hi55 = 15;
    int b29 = 94;
    int b39 = 8;
    int acc59 = 10;
    int cnt81 = -22;
    int cnt11 = 10;
    int cnt64 = 39971;
    int lo56 = 3;
    int prev38 = 5;
    int lo29 = 4;
    int a7 = -7;
    int y12 = 55263;
    struct Point s; s.a = 3564; s.b = 32200;
    int i;
    for (i = 0; i < 16; i++) {
        prev38 = xn[i];
        lo56 = prev38 + cnt81;
        prev38 = cnt11 + 61;
        hi55 = b29 + lo29;
        cnt64 = cnt11;
        cnt81 = cnt64;
        lo56 = a7 - 0;
        s.a = s.a + s.b;
        yo[i] = y80;
    }
}
int main() { test_func(); return 0; }

