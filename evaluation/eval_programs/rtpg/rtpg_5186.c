// RTPG_5186: vars=3 stmts=7
int xn[16];
int yo[16];
struct Data { int a; int b; };
void test_func(void) {
    int y48 = -36;
    int acc3 = 2;
    int b11 = 49839;
    struct Data s; s.a = 5; s.b = 44553;
    int i;
    for (i = 0; i < 16; i++) {
        acc3 = xn[i];
        acc3 = acc3 - 40960;
        acc3 = b11 - acc3;
        acc3 = b11;
        y48 = acc3 + b11;
        acc3 = acc3;
        y48 = y48 - 4;
        acc3 = b11 - 44;
        s.a = s.a + s.b;
        if (y48 >= 69) {
        acc3 = b11 - y48;
        }
        yo[i] = y48;
    }
}
int main() { test_func(); return 0; }

