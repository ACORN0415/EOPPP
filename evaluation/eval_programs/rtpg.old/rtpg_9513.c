// RTPG_9513: vars=5 stmts=8
void test_func(void) {
    int acc25 = -16;
    int x85 = -49;
    int c96 = -22;
    int prev80 = -24;
    int acc67 = 0;
    int h0 = 87;
    int sv0 = 0;
    int h1 = -36;
    int sv1 = 0;
    int i;
    for (i = 0; i < 12; i++) {
        acc67 = acc67;
        acc25 = acc25 - acc67;
        c96 = x85 - acc25;
        prev80 = c96 * 3;
        prev80 = c96 * 16;
        x85 = acc25 + prev80;
        x85 = acc25 + 38192;
        c96 = c96;
        if (c96 < 35) {
        prev80 = acc25 - c96;
        }
    }
}
int main() { test_func(); return 0; }

