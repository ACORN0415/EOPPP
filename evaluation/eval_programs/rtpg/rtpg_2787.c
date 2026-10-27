// RTPG_2787: vars=5 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int cur87 = 7;
    int cnt60 = 5;
    int v91 = 41817;
    int b88 = 51371;
    int tmp67 = 69;
    int *ptr = &tmp67;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 9510;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cur87 = xn[i];
        cur87 = v91 - 89;
        v91 = tmp67 ^ cnt60;
        cnt60 = tmp67 * 13745;
        cnt60 = v91 | cur87;
        v91 = cnt60 * 24743;
        b88 = b88 + 4;
        cnt60 = cnt60 + b88;
        cnt60 = v91 * 27236;
        *ptr = *ptr + 4;
        yo[i] = cur87;
    }
}
int main() { test_func(); return 0; }

