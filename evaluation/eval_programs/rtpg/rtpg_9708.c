// RTPG_9708: vars=11 stmts=2
int xn[16];
int yo[16];
enum State { ON, GREEN, FAST };
void test_func(void) {
    int tmp49 = 21584;
    int res55 = 3985;
    int lo72 = 24343;
    int dat54 = 59076;
    int a48 = 0;
    int c41 = 83;
    int dat56 = -10;
    int res7 = 29;
    int hi78 = 13;
    int sum60 = 25;
    int tmp42 = 2736;
    enum State st = ON;
    int i;
    for (i = 0; i < 16; i++) {
        c41 = xn[i];
        lo72 = res7 & tmp49;
        dat54 = sum60 + tmp49;
        yo[i] = tmp42;
    }
}
int main() { test_func(); return 0; }

