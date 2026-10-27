// RTPG_8748: vars=4 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int tmp36 = 48395;
    int prev97 = 18160;
    int dat99 = 12;
    int out7 = 31277;
    int i;
    for (i = 0; i < 16; i++) {
        tmp36 = xn[i];
        prev97 = out7 + 3440;
        tmp36 = tmp36 + 5;
        dat99 = dat99 - -20;
        tmp36 = tmp36 + 4;
        dat99 = dat99 + out7;
        dat99 = dat99 + prev97;
        out7 = out7 + 40024;
        yo[i] = prev97;
    }
}
int main() { test_func(); return 0; }

