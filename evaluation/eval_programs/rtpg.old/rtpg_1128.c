// RTPG_1128: vars=5 stmts=6
void test_func(void) {
    int b93 = 7;
    int prev53 = 62;
    int y5 = -16;
    int prev5 = 8;
    int v97 = 10;
    int h0 = 75;
    int sv0 = 0;
    int h1 = 55;
    int sv1 = 0;
    int i;
    for (i = 0; i < 13; i++) {
        switch (prev5) {
            case 0: prev53 = -41; break;
            case 1: y5 = 1; break;
            case 2: y5 = 15080; break;
            case 3: prev53 = 59; break;
            default: break;
        }
        prev5 = prev5 + 1;
    }
done:
    prev53 = 0;
}
int main() { test_func(); return 0; }

