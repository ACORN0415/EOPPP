// RTPG_5463: vars=4 stmts=2
void test_func(void) {
    int y95 = 5;
    int prev6 = 39;
    int hi75 = 7;
    int dat13 = 40226;
    int h0 = 31935;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 51; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        prev6 = hi75 - prev6;
        dat13 = dat13 - prev6;
        }
    }
}
int main() { test_func(); return 0; }

