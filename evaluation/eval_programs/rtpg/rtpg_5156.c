// RTPG_5156: vars=11 stmts=5
int xn[32];
int yo[32];
enum State { OFF, RED, FAST };
void test_func(void) {
    int hi32 = 37617;
    int b70 = 1;
    int tmp33 = 52663;
    int acc16 = 6;
    int b1 = -26;
    int cur25 = 80;
    int z85 = 3;
    int dat69 = 10;
    int sum88 = 31;
    int lo11 = 6;
    int lo89 = -33;
    enum State st = OFF;
    int i;
    for (i = 0; i < 32; i++) {
        z85 = xn[i];
        b1 = lo11 / z85;
        acc16 = acc16 + 1;
        sum88 = sum88 + 3;
        cur25 = cur25 + tmp33;
        dat69 = b1 ^ lo89;
        if (b1 != 7) {
        lo11 = sum88;
        }
        yo[i] = tmp33;
    }
}
int main() { test_func(); return 0; }

