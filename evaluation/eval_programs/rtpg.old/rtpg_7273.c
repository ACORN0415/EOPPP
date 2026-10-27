// RTPG_7273: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int v7 = 47776;
    int tmp50 = 43956;
    int y85 = 10;
    int h0 = 45926;
    int sv0 = 0;
    int h1 = 44;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v7 = xn[i];
        tmp50 = y85 * 96;
        tmp50 = v7 * 0;
        tmp50 = v7 * 6;
        y85 = tmp50 + 43778;
        tmp50 = tmp50 + 5;
        y85 = y85;
        tmp50 = y85 * 11877;
        yo[i] = v7;
    }
}
int main() { test_func(); return 0; }

