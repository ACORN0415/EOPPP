// RTPG_2162: vars=11 stmts=8
enum State { SLOW, GREEN, OFF };
void test_func(void) {
    int out43 = 5;
    int x89 = 62873;
    int tmp29 = 10;
    int tmp76 = 19;
    int dat1 = 28482;
    int z51 = 8;
    int dat88 = 37846;
    int acc83 = 38;
    int y14 = -40;
    int lo3 = 68;
    int y74 = 33;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 48; i++) {
        x89 = tmp76 + acc83;
        tmp29 = acc83;
        z51 = y14;
        dat1 = tmp29 + tmp76;
        z51 = y14 - tmp76;
        tmp29 = tmp29;
        x89 = z51 + out43;
        z51 = y14;
    }
}
int main() { test_func(); return 0; }

