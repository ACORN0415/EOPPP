// RTPG_5125: vars=3 stmts=7
int xn[16];
int yo[16];
struct Data { int a; int b; };
void test_func(void) {
    int acc3 = -36;
    int y48 = 2;
    int b11 = 49839;
    struct Data s; s.a = 5; s.b = 44553;
    int i;
    for (i = 0; i < 16; i++) {
        y48 = xn[i];
        y48 = y48 - 40960;
        y48 = b11 - y48;
        y48 = b11;
        acc3 = y48 + b11;
        y48 = y48;
        acc3 = acc3 - 4;
        y48 = b11 - 44;
        s.a = s.a + s.b;
        if (acc3 >= 69) {
        y48 = b11 - acc3;
        }
        yo[i] = acc3;
    }
}
int main() { test_func(); return 0; }

