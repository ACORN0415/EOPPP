// RTPG_2714: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int sum62 = 15;
    int z59 = 3664;
    int val44 = 13;
    int cnt21 = 27;
    int i;
    for (i = 0; i < 64; i++) {
        cnt21 = xn[i];
        val44 = val44 + 1;
        z59 = cnt21 + sum62;
        z59 = z59 - 9;
        if (z59 != -47) {
        z59 = val44;
        }
        yo[i] = cnt21;
    }
}
int main() { test_func(); return 0; }

