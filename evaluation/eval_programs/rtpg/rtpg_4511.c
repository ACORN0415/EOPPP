// RTPG_4511: vars=7 stmts=8
int xn[32];
int yo[32];
enum State { ON, BLUE, RED };
void test_func(void) {
    int x23 = 44;
    int v81 = 3;
    int c73 = 94;
    int dat20 = -36;
    int hi86 = 73;
    int cur95 = 1;
    int v47 = 27936;
    enum State st = ON;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 12403;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v47 = xn[i];
        c73 = c73 - 1;
        hi86 = hi86 + 5;
        x23 = v81 * 27724;
        dat20 = cur95 * 25880;
        v47 = v47 + 2;
        hi86 = v81 + 33389;
        dat20 = dat20 - hi86;
        dat20 = dat20 + -10;
        if (cur95 <= 41) {
        v47 = v47 - hi86;
        }
        yo[i] = x23;
    }
}
int main() { test_func(); return 0; }

