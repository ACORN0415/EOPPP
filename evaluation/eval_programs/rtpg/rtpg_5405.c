// RTPG_5405: vars=6 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int y99 = 37;
    int prev94 = 41874;
    int z17 = 81;
    int z90 = 18;
    int y59 = -44;
    int dat98 = 13305;
    int *ptr = &prev94;
    int h0 = -44;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        y99 = xn[i];
        y99 = z90 - y99;
        y99 = dat98 + 1;
        prev94 = y59 * 31093;
        y99 = z17 - 7;
        prev94 = z90 - y99;
        z17 = z90 * 5;
        *ptr = *ptr + 5;
        yo[i] = prev94;
    }
}
int main() { test_func(); return 0; }

