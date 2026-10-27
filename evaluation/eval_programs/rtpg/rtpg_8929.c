// RTPG_8929: vars=3 stmts=12
int xn[16];
int yo[16];
struct Data { int a; int b; };
void test_func(void) {
    int c75 = 12;
    int c60 = -14;
    int x54 = 36;
    struct Data s; s.a = 30769; s.b = 20;
    int i;
    for (i = 0; i < 16; i++) {
        c75 = xn[i];
        c60 = x54 - x54;
        c75 = x54 - c75;
        x54 = x54 - c60;
        c60 = c75 + 4;
        c75 = c75 - 47463;
        x54 = x54 - c60;
        x54 = c75 + 4;
        x54 = x54;
        c60 = c60 - 4;
        x54 = x54 + 3;
        x54 = c75 - c75;
        x54 = c60 + c75;
        s.a = s.a + s.b;
        if (c75 >= 2) {
        c60 = c75;
        }
        yo[i] = c75;
    }
}
int main() { test_func(); return 0; }

