// RTPG_4227: vars=5 stmts=4
void test_func(void) {
    int dat30 = 1;
    int y35 = 12;
    int z40 = 23408;
    int y26 = 78;
    int hi59 = 1;
    int i;
    for (i = 0; i < 84; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        dat30 = z40 - hi59;
        hi59 = y35 + hi59;
        hi59 = y35 + z40;
        dat30 = z40 + 3;
        }
    }
}
int main() { test_func(); return 0; }

