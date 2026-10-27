// RTPG_9603: vars=8 stmts=3
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int acc16 = 32;
    int z75 = 18;
    int a68 = 57318;
    int dat25 = 29855;
    int b65 = -46;
    int y27 = 41580;
    int z79 = 3;
    int sum25 = -17;
    struct Point s; s.a = 83; s.b = 3;
    int *ptr = &a68;
    int i;
    for (i = 0; i < 16; i++) {
        z75 = xn[i];
        a68 = a68 + 4;
        z79 = y27 - 18138;
        a68 = z75;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        yo[i] = y27;
    }
}
int main() { test_func(); return 0; }

