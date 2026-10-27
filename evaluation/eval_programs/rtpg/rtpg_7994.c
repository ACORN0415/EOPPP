// RTPG_7994: vars=10 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int y91 = 44;
    int dat74 = 19;
    int a2 = 75;
    float z25 = 18.27;
    int z54 = 82;
    int cur14 = 24189;
    int lo13 = 3;
    int val16 = 15;
    int out50 = 33;
    int b4 = 68;
    int i;
    for (i = 0; i < 32; i++) {
        z54 = xn[i];
        z25 = lo13;
        z54 = lo13 + y91;
        b4 = b4 + 4;
        y91 = y91 + 23;
        cur14 = b4 + z25;
        yo[i] = cur14;
    }
}
int main() { test_func(); return 0; }

