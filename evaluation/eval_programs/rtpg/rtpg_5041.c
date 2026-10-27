// RTPG_5041: vars=6 stmts=6
void test_func(void) {
    int b80 = 4;
    int out24 = 50;
    int acc53 = 1;
    int y59 = 1;
    int b85 = 54816;
    int y74 = 14469;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 7042;
    int sv1 = 0;
    int i;
    for (i = 0; i < 40; i++) {
        b85 = acc53 * 39;
        y59 = y59 + 4;
        out24 = b80 * 13;
        y74 = out24 * 52904;
        y59 = out24 * 28;
        out24 = out24 + b85;
    }
}
int main() { test_func(); return 0; }

