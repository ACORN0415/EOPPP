// RTPG_4640: vars=7 stmts=9
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int c77 = 42204;
    int v60 = 99;
    int v90 = 17813;
    int y73 = 58424;
    int z82 = 87;
    int cnt16 = 8;
    int x88 = 45;
    struct Point s; s.a = 9; s.b = -50;
    int *ptr = &v60;
    int i;
    for (i = 0; i < 16; i++) {
        z82 = xn[i];
        cnt16 = cnt16 - y73;
        v60 = v90 + c77;
        cnt16 = cnt16 + 4;
        z82 = y73;
        y73 = v90;
        c77 = y73 - x88;
        x88 = y73 - cnt16;
        v60 = v60 - 2;
        z82 = c77 - v90;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        if (y73 <= 19) {
        y73 = c77 - c77;
        }
        yo[i] = v60;
    }
}
int main() { test_func(); return 0; }

