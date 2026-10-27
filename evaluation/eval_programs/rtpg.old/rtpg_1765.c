// RTPG_1765: vars=6 stmts=5
void test_func(void) {
    int out85 = 62831;
    int hi33 = 51820;
    int v73 = 71;
    int v42 = 6;
    int x87 = 8;
    int dat41 = 46761;
    int *ptr = &x87;
    int i;
    for (i = 0; i < 25; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        x87 = out85;
        v42 = v73 + x87;
        dat41 = x87 - -7;
        v42 = out85 + 64306;
        out85 = v73 - v42;
        }
    }
}
int main() { test_func(); return 0; }

