// RTPG_7029: vars=3 stmts=8
void test_func(void) {
    int tmp80 = 46370;
    int dat83 = 58;
    int hi91 = 9;
    int h0 = 82;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 53; i++) {
        switch (hi91) {
            case 0: dat83 = 3; break;
            case 1: dat83 = 48790; break;
            case 2: dat83 = 834; break;
            default: break;
        }
        hi91 = hi91 + 1;
    }
}
int main() { test_func(); return 0; }

