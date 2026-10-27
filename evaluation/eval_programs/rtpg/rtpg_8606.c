// RTPG_8606: vars=3 stmts=2
void test_func(void) {
    int a67 = 79;
    int y69 = 51954;
    int a32 = 26;
    int h0 = 45936;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 92; i++) {
        switch (a67) {
            case 0: a67 = 5; break;
            case 1: a32 = 0; break;
            case 2: a32 = 48685; break;
            default: break;
        }
        a67 = a67 + 1;
    }
}
int main() { test_func(); return 0; }

