// RTPG_2507: vars=5 stmts=9
void test_func(void) {
    int sum56 = 5;
    int out26 = 6751;
    int acc38 = 63;
    int out96 = 6;
    int dat96 = 23;
    int h0 = 34604;
    int sv0 = 0;
    int h1 = 359;
    int sv1 = 0;
    int i;
    for (i = 0; i < 27; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        out96 = sum56 + out96;
        out96 = dat96 - out26;
        sum56 = sum56 + out26;
        sum56 = dat96 - acc38;
        dat96 = dat96 + 4;
        sum56 = sum56 + 1;
        out96 = out96 + out26;
        acc38 = out96 + 5;
        out26 = out26 - 51540;
        }
    }
}
int main() { test_func(); return 0; }

