// RTPG_2843: vars=4 stmts=5
void test_func(void) {
    int acc61 = 45388;
    int y65 = 68;
    int x63 = 92;
    int b2 = -29;
    int h0 = 24271;
    int sv0 = 0;
    int h1 = 34516;
    int sv1 = 0;
    int i;
    for (i = 0; i < 23; i++) {
        x63 = y65;
        x63 = acc61 & x63;
        b2 = b2 + 3;
        y65 = acc61 + y65;
        x63 = y65 - x63;
    }
}
int main() { test_func(); return 0; }

