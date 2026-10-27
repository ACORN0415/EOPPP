// RTPG_5734: vars=10 stmts=4
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int out84 = 11155;
    int y47 = 35;
    int x81 = 60017;
    int z40 = 31;
    int v16 = 7;
    int hi80 = 19;
    int tmp13 = 35;
    int acc37 = 3;
    int lo5 = 0;
    int z57 = 61;
    struct Data s; s.a = 70; s.b = 71;
    int i;
    for (i = 0; i < 64; i++) {
        hi80 = xn[i];
        y47 = z40 | y47;
        y47 = out84 & tmp13;
        lo5 = lo5 + 3;
        lo5 = z57 | v16;
        s.a = s.a + s.b;
        if (out84 < 31) {
        y47 = out84;
        }
        yo[i] = z57;
    }
}
int main() { test_func(); return 0; }

