// RTPG_827: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int dat88 = 66;
    int prev11 = 61;
    int z51 = 67;
    int out36 = 51;
    int acc26 = 10;
    int *ptr = &acc26;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 27;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        dat88 = xn[i];
        prev11 = prev11 + 5;
        out36 = out36 - acc26;
        *ptr = *ptr + 5;
        yo[i] = prev11;
    }
}
int main() { test_func(); return 0; }

