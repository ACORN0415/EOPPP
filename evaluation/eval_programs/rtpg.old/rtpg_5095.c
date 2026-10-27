// RTPG_5095: vars=11 stmts=5
int xn[32];
int yo[32];
enum State { OFF, RED, FAST };
void test_func(void) {
    int cur25 = 37617;
    int acc16 = 1;
    int b70 = 52663;
    int b1 = 6;
    int tmp33 = -26;
    int hi32 = 80;
    int z85 = 3;
    int lo11 = 10;
    int sum88 = 31;
    int lo89 = 6;
    int dat69 = -33;
    enum State st = OFF;
    int i;
    for (i = 0; i < 32; i++) {
        z85 = xn[i];
        tmp33 = lo89 / z85;
        b1 = b1 + 1;
        sum88 = sum88 + 3;
        hi32 = hi32 + b70;
        lo11 = tmp33 ^ lo89;
        if (tmp33 != 7) {
        lo89 = sum88;
        }
        yo[i] = b70;
    }
}
int main() { test_func(); return 0; }

