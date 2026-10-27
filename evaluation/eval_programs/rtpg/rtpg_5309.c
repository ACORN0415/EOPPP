// RTPG_5309: vars=3 stmts=4
void test_func(void) {
    int dat33 = 17162;
    int tmp44 = 58011;
    int c41 = 4611;
    int h0 = 43;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 43; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        c41 = c41 - dat33;
        tmp44 = tmp44 + 3;
        tmp44 = dat33 - c41;
        c41 = dat33 - tmp44;
        }
    }
}
int main() { test_func(); return 0; }

