// RTPG_4426: vars=6 stmts=8
int idx_arr[64];
void test_func(void) {
    int acc16 = 23956;
    int y35 = -25;
    int lo21 = 56047;
    int cur66 = 5;
    int acc22 = 12;
    int c85 = 7996;
    int i;
    for (i = 0; i < 70; i++) {
        switch (acc16) {
            case 0: cur66 = 51; break;
            case 1: y35 = 5; break;
            case 2: c85 = 38; break;
            case 3: y35 = -8; break;
            default: break;
        }
        acc16 = acc16 + 1;
    }
}
int main() { test_func(); return 0; }

