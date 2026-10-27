// RTPG_8346: vars=8 stmts=2
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int c80 = 1;
    int x56 = 26;
    int y86 = 1;
    int prev25 = -44;
    int prev60 = 97;
    int dat9 = 5;
    int c49 = 8;
    int c46 = 14;
    struct Data s; s.a = 72; s.b = 25483;
    int i;
    for (i = 0; i < 32; i++) {
        c46 = xn[i];
        prev25 = dat9;
        c80 = dat9 + prev60;
        s.a = s.a + s.b;
        yo[i] = prev60;
    }
}
int main() { test_func(); return 0; }

