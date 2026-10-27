// RTPG_6734: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int v36 = -45;
    int z86 = 52;
    int cur81 = 81;
    int i;
    for (i = 0; i < 32; i++) {
        v36 = xn[i];
        v36 = v36;
        cur81 = z86 + 7;
        v36 = cur81 + z86;
        z86 = z86;
        z86 = cur81 - z86;
        z86 = z86 - 3;
        yo[i] = z86;
    }
}
int main() { test_func(); return 0; }

