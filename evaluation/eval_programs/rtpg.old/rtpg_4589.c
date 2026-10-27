// RTPG_4589: vars=7 stmts=9
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int y73 = 42204;
    int v90 = 99;
    int cnt16 = 17813;
    int c77 = 58424;
    int v60 = 87;
    int x88 = 8;
    int z82 = 45;
    struct Point s; s.a = 9; s.b = -50;
    int *ptr = &v90;
    int i;
    for (i = 0; i < 16; i++) {
        v60 = xn[i];
        x88 = x88 - c77;
        v90 = cnt16 + y73;
        x88 = x88 + 4;
        v60 = c77;
        c77 = cnt16;
        y73 = c77 - z82;
        z82 = c77 - x88;
        v90 = v90 - 2;
        v60 = y73 - cnt16;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        if (c77 <= 19) {
        c77 = y73 - y73;
        }
        yo[i] = v90;
    }
}
int main() { test_func(); return 0; }

