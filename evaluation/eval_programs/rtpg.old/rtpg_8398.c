// RTPG_8398: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int dat29 = 66;
    int cur83 = 3;
    int x25 = 2;
    int v59 = 50299;
    int i;
    for (i = 0; i < 32; i++) {
        cur83 = xn[i];
        x25 = x25 - cur83;
        v59 = x25;
        x25 = x25 + -5;
        v59 = cur83;
        if (dat29 <= 13) {
        dat29 = v59 - 45;
        }
        yo[i] = dat29;
    }
done:
    cur83 = 0;
}
int main() { test_func(); return 0; }

