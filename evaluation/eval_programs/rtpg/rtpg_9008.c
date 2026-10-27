// RTPG_9008: vars=10 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int acc30 = 12;
    int x32 = 17;
    int tmp60 = 5;
    int acc77 = 7;
    int z33 = 21;
    int a44 = 5346;
    int y12 = -23;
    int dat88 = 7788;
    int y21 = -5;
    int y76 = 36369;
    int i;
    for (i = 0; i < 32; i++) {
        x32 = xn[i];
        y76 = acc30 + a44;
        x32 = acc30;
        acc77 = y76 + dat88;
        dat88 = acc30 - dat88;
        a44 = tmp60;
        if (acc77 == 61) {
        tmp60 = acc77 - a44;
        }
        yo[i] = a44;
    }
}
int main() { test_func(); return 0; }

