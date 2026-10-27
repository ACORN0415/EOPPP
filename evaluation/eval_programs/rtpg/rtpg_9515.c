// RTPG_9515: vars=6 stmts=3
void test_func(void) {
    int hi71 = 35;
    int y68 = 47;
    int y43 = 44393;
    int cur8 = 65;
    int out70 = 42;
    int cnt6 = 5;
    int h0 = 8595;
    int sv0 = 0;
    int h1 = 34;
    int sv1 = 0;
    int h2 = 34;
    int sv2 = 0;
    int i;
    for (i = 0; i < 56; i++) {
        switch (hi71) {
            case 0: cnt6 = 3; break;
            case 1: y43 = 21; break;
            case 2: y68 = 10; break;
            case 3: y43 = 3466; break;
            default: break;
        }
        hi71 = hi71 + 1;
    }
}
int main() { test_func(); return 0; }

