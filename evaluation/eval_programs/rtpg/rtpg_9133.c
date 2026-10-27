// RTPG_9133: vars=9 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int lo4 = 4;
    int b16 = 50;
    int x45 = 40;
    int dat76 = 8;
    int cnt97 = 6;
    int z1 = 12981;
    int dat56 = 1;
    int b7 = 34;
    int cnt6 = 7;
    int h0 = 45;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int h2 = 28;
    int sv2 = 0;
    int h3 = 48;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b7 = xn[i];
        dat76 = x45;
        x45 = dat76 - cnt6;
        cnt6 = dat76 - 6;
        z1 = b16 - cnt97;
        cnt97 = z1;
        yo[i] = x45;
    }
}
int main() { test_func(); return 0; }

