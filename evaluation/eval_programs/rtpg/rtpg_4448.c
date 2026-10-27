// RTPG_4448: vars=6 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int z20 = 1;
    int b39 = 65;
    int out27 = 37587;
    int cur66 = 4138;
    int b18 = 48;
    int lo36 = 30531;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 47605;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        b18 = xn[i];
        cur66 = z20 * 88;
        cur66 = cur66 % z20;
        yo[i] = cur66;
    }
}
int main() { test_func(); return 0; }

