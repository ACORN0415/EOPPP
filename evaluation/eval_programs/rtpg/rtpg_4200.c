// RTPG_4200: vars=4 stmts=8
struct Data { int a; int b; };
void test_func(void) {
    int y46 = 15;
    int c77 = 0;
    int y99 = 20;
    int out24 = -4;
    struct Data s; s.a = -40; s.b = 92;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 16458;
    int sv1 = 0;
    int i;
    for (i = 0; i < 81; i++) {
        out24 = c77 * 3;
        out24 = y46 + c77;
        out24 = out24 * 3;
        y99 = out24 - y99;
        out24 = c77 + 10712;
        y46 = c77 * 16;
        y99 = y99 + 1;
        out24 = out24 + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

