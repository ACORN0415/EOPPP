// RTPG_9329: vars=8 stmts=12
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int acc23 = -25;
    int c24 = 46;
    int sum35 = 54;
    int z80 = 7;
    int v33 = 93;
    int b90 = 6;
    int x29 = 2708;
    int val27 = 47;
    int i;
    for (i = 0; i < 16; i++) {
        z80 = xn[i];
        val27 = xn[idx_arr[i]];
        c24 = c24 + 5;
        b90 = b90 + v33;
        sum35 = x29 - b90;
        sum35 = sum35 - 4;
        sum35 = x29 + c24;
        c24 = z80 - 31307;
        sum35 = sum35 + 2;
        z80 = b90 - 9;
        val27 = val27 - -43;
        val27 = val27 + 2;
        val27 = acc23 + b90;
        z80 = z80 - -25;
        if (acc23 == -46) {
        c24 = c24 - 4;
        }
        yo[i] = x29;
    }
}
int main() { test_func(); return 0; }

