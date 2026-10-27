// RTPG_4271: vars=6 stmts=12
int xn[16];
int yo[16];
struct Data { int a; int b; };
void test_func(void) {
    int dat80 = 47;
    int c23 = 9;
    int x40 = 10481;
    int hi52 = 29515;
    int lo7 = 49;
    int y76 = 4;
    struct Data s; s.a = 14770; s.b = 3;
    int *ptr = &c23;
    int i;
    for (i = 0; i < 16; i++) {
        dat80 = xn[i];
        x40 = c23 - c23;
        y76 = y76 + 4;
        x40 = hi52 - dat80;
        x40 = dat80 + hi52;
        dat80 = dat80 + 2;
        lo7 = dat80 + y76;
        c23 = y76 - lo7;
        lo7 = dat80 + 3;
        dat80 = y76;
        y76 = y76 - dat80;
        y76 = y76 - 37;
        c23 = hi52;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
        if (lo7 >= -38) {
        c23 = hi52 - y76;
        }
        yo[i] = c23;
    }
}
int main() { test_func(); return 0; }

