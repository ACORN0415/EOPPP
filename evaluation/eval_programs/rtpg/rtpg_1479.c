// RTPG_1479: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int b36 = 0;
    int z42 = 14578;
    int v92 = 59620;
    int hi18 = 51221;
    int y26 = 60819;
    int cur35 = 14173;
    int sum7 = 0;
    int prev79 = 1;
    int h0 = 5304;
    int sv0 = 0;
    int h1 = 19;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        sum7 = xn[i];
        cur35 = cur35 * 82;
        b36 = v92 - sum7;
        z42 = z42 - hi18;
        b36 = cur35 * 21159;
        sum7 = y26 + sum7;
        if (hi18 <= -28) {
        cur35 = cur35 + 1;
        }
        yo[i] = hi18;
    }
}
int main() { test_func(); return 0; }

