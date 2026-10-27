// RTPG_3484: vars=5 stmts=8
void test_func(void) {
    int z18 = 34;
    int acc16 = 46566;
    int c13 = -50;
    int z20 = 1839;
    int z76 = 58;
    int h0 = -35;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 93; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        z18 = z18 - c13;
        c13 = c13;
        z18 = z76;
        c13 = c13 - 1;
        z18 = z76;
        z18 = z76;
        acc16 = c13 + 29;
        acc16 = c13 - z76;
        }
    }
done:
    z18 = 0;
}
int main() { test_func(); return 0; }

