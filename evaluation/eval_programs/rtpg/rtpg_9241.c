// RTPG_9241: vars=3 stmts=5
void test_func(void) {
    int val25 = 7;
    int lo70 = 80;
    int cur73 = 9;
    int *ptr = &lo70;
    int h0 = 36689;
    int sv0 = 0;
    int h1 = 57862;
    int sv1 = 0;
    int i;
    for (i = 0; i < 31; i++) {
        switch (val25) {
            case 0: cur73 = 53176; break;
            case 1: val25 = 44084; break;
            case 2: val25 = 48; break;
            default: break;
        }
        val25 = val25 + 1;
    }
}
int main() { test_func(); return 0; }

