// RTPG_659: vars=5 stmts=5
void test_func(void) {
    int c2 = 8;
    int acc66 = 3;
    int x14 = 16;
    float out40 = 62.71;
    int z89 = 1;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 33; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        out40 = z89 - x14;
        x14 = x14 + 4;
        z89 = c2 + x14;
        x14 = c2 + 27;
        c2 = out40 - acc66;
        }
    }
}
int main() { test_func(); return 0; }

