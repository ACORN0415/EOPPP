// RTPG_7899: vars=10 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cur14 = 44;
    int z25 = 19;
    int out50 = 75;
    float lo13 = 18.27;
    int a2 = 82;
    int b4 = 24189;
    int dat74 = 3;
    int val16 = 15;
    int z54 = 33;
    int y91 = 68;
    int i;
    for (i = 0; i < 32; i++) {
        a2 = xn[i];
        lo13 = dat74;
        a2 = dat74 + cur14;
        y91 = y91 + 4;
        cur14 = cur14 + 23;
        b4 = y91 + lo13;
        yo[i] = b4;
    }
}
int main() { test_func(); return 0; }

