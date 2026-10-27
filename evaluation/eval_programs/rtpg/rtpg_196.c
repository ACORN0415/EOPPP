// RTPG_196: vars=10 stmts=5
int xn[64];
int yo[64];
struct Node { int a; int b; };
void test_func(void) {
    int tmp61 = -34;
    int sum21 = 0;
    int prev48 = 9;
    int y72 = 19440;
    int z53 = 14897;
    int sum1 = 2;
    int x92 = 4;
    int cur61 = 31;
    int cnt16 = 28;
    int y80 = -11;
    struct Node s; s.a = 54691; s.b = 62;
    int i;
    for (i = 0; i < 64; i++) {
        y72 = xn[i];
        y80 = prev48 + x92;
        prev48 = cur61;
        y72 = sum1 + tmp61;
        y72 = y80 + 7288;
        z53 = x92 - sum21;
        s.a = s.a + s.b;
        if (cur61 > 32) goto done;
        yo[i] = z53;
    }
done:
    tmp61 = 0;
}
int main() { test_func(); return 0; }

