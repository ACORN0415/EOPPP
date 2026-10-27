// RTPG_4854: vars=6 stmts=5
void test_func(void) {
    int v67 = 10;
    int out67 = 9;
    int z52 = 4;
    int hi45 = 42;
    int lo98 = 22;
    int cnt66 = 46;
    int *ptr = &lo98;
    int h0 = 11;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 61; i++) {
        switch (cnt66) {
            case 0: lo98 = 6; break;
            case 1: cnt66 = 50; break;
            case 2: lo98 = 1; break;
            case 3: out67 = 44; break;
            default: break;
        }
        cnt66 = cnt66 + 1;
    }
}
int main() { test_func(); return 0; }

