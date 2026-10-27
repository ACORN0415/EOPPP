// RTPG_4304: vars=5 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int sum10 = 10;
    int v81 = 22;
    int res70 = 1;
    int y40 = 33;
    int a14 = 61631;
    int h0 = 13;
    int sv0 = 0;
    int h1 = 46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v81 = xn[i];
        v81 = res70 * 34;
        a14 = a14 + 3;
        y40 = v81 * 50;
        sum10 = sum10 - 2;
        res70 = res70 - 50;
        a14 = a14 + 47591;
        y40 = a14;
        a14 = a14;
        sum10 = sum10 - 1;
        y40 = sum10 + sum10;
        v81 = y40 * 32721;
        yo[i] = sum10;
    }
}
int main() { test_func(); return 0; }

