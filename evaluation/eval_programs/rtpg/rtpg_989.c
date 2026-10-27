// RTPG_989: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int tmp15 = 97;
    int out18 = 11387;
    int tmp85 = -32;
    int v88 = 26317;
    int hi31 = -12;
    int h0 = 29230;
    int sv0 = 0;
    int h1 = 47093;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        hi31 = xn[i];
        tmp85 = out18 + tmp85;
        hi31 = out18;
        v88 = v88 + 3;
        if (hi31 < 83) {
        out18 = tmp15 + out18;
        }
        yo[i] = tmp15;
    }
}
int main() { test_func(); return 0; }

