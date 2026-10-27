// RTPG_965: vars=4 stmts=8
void test_func(void) {
    int val89 = 64398;
    int a29 = 20770;
    int tmp80 = 100;
    int sum48 = 5;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 22;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        switch (tmp80) {
            case 0: val89 = 5; break;
            case 1: val89 = -33; break;
            case 2: sum48 = 1; break;
            default: break;
        }
        tmp80 = tmp80 + 1;
    }
}
int main() { test_func(); return 0; }

