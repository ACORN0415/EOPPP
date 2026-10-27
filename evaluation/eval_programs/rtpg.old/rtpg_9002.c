// RTPG_9002: vars=8 stmts=5
void test_func(void) {
    int x61 = 61978;
    int y5 = 7;
    int x99 = 5;
    int acc22 = 24534;
    int lo33 = 60;
    int x64 = 75;
    int b60 = 4;
    int x89 = -10;
    int h0 = 56;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 76; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        x89 = x99 + acc22;
        y5 = acc22 + y5;
        acc22 = b60 + y5;
        x89 = x89 - y5;
        b60 = acc22;
        }
    }
done:
    x89 = 0;
}
int main() { test_func(); return 0; }

