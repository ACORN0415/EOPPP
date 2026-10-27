// RTPG_4454: vars=7 stmts=8
int xn[32];
int yo[32];
enum State { ON, BLUE, RED };
void test_func(void) {
    int c73 = 44;
    int dat20 = 3;
    int hi86 = 94;
    int v47 = -36;
    int v81 = 73;
    int cur95 = 1;
    int x23 = 27936;
    enum State st = ON;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 12403;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        x23 = xn[i];
        hi86 = hi86 - 1;
        v81 = v81 + 5;
        c73 = dat20 * 27724;
        v47 = cur95 * 25880;
        x23 = x23 + 2;
        v81 = dat20 + 33389;
        v47 = v47 - v81;
        v47 = v47 + -10;
        if (cur95 <= 41) {
        x23 = x23 - v81;
        }
        yo[i] = c73;
    }
}
int main() { test_func(); return 0; }

