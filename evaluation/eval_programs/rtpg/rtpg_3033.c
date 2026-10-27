// RTPG_3033: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int z67 = 58234;
    int val82 = -48;
    int acc52 = 84;
    int sum51 = 6;
    int h0 = -34;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc52 = xn[i];
        z67 = acc52;
        val82 = val82 + 1;
        sum51 = sum51 + 8;
        acc52 = val82 - 2;
        if (z67 < 81) {
        val82 = z67 - sum51;
        }
        yo[i] = acc52;
    }
}
int main() { test_func(); return 0; }

