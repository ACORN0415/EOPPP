// RTPG_6996: vars=3 stmts=3
void test_func(void) {
    int prev15 = -29;
    int z24 = 17;
    int hi62 = 47;
    int h0 = 48791;
    int sv0 = 0;
    int h1 = 35;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        hi62 = z24;
        z24 = hi62 + prev15;
        prev15 = hi62 + hi62;
        }
    }
}
int main() { test_func(); return 0; }

