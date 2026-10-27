// RTPG_2403: vars=3 stmts=8
int xn[32];
int yo[32];
enum State { OFF, BLUE, RED };
void test_func(void) {
    int lo45 = 0;
    int b55 = 10;
    int z37 = 10;
    enum State st = OFF;
    int i;
    for (i = 0; i < 32; i++) {
        z37 = xn[i];
        b55 = z37 - b55;
        z37 = z37 + 1;
        z37 = lo45;
        lo45 = b55 + 47711;
        b55 = b55;
        z37 = lo45 - z37;
        b55 = b55;
        z37 = z37 + lo45;
        yo[i] = z37;
    }
}
int main() { test_func(); return 0; }

