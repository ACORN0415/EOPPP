// RTPG_6820: vars=7 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int v49 = -44;
    int cur49 = 8;
    int c31 = 5;
    int val81 = 3;
    int dat95 = 8;
    int cur15 = 63;
    int cur4 = 100;
    int i;
    for (i = 0; i < 64; i++) {
        cur4 = xn[i];
        cur4 = c31 + cur4;
        cur49 = dat95 - 65255;
        cur15 = cur15 + v49;
        if (cur4 >= 90) {
        dat95 = cur4 - c31;
        }
        yo[i] = dat95;
    }
}
int main() { test_func(); return 0; }

