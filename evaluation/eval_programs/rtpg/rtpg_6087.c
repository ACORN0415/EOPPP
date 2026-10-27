// RTPG_6087: vars=6 stmts=10
int xn[16];
int yo[16];
struct Data { int a; int b; };
void test_func(void) {
    int dat80 = 5;
    int dat15 = 4;
    int lo5 = 45;
    int v55 = 6;
    int dat60 = 42370;
    int cur2 = 9;
    struct Data s; s.a = 42; s.b = 9;
    int i;
    for (i = 0; i < 16; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        dat15 = dat80 - 41;
        lo5 = cur2 + dat80;
        lo5 = v55 - 27578;
        dat60 = v55 + 7;
        dat60 = v55 - v55;
        dat80 = dat80;
        dat60 = dat60 + 5;
        dat80 = cur2;
        dat60 = cur2 + dat60;
        cur2 = cur2;
        }
    }
}
int main() { test_func(); return 0; }

