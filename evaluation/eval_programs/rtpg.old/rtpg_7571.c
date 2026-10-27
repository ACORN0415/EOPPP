// RTPG_7571: vars=4 stmts=11
void test_func(void) {
    int dat60 = 30442;
    int v35 = 41;
    int out86 = 36800;
    int sum79 = 3;
    int i;
    for (i = 0; i < 66; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        out86 = v35 - out86;
        sum79 = sum79 - v35;
        v35 = out86 - 45072;
        v35 = out86 - v35;
        sum79 = v35 + out86;
        sum79 = dat60 + 10;
        sum79 = v35 + 63;
        sum79 = dat60;
        sum79 = sum79 - 4;
        out86 = v35;
        sum79 = v35 - 43;
        }
    }
}
int main() { test_func(); return 0; }

