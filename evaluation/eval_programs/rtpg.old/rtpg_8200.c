// RTPG_8200: vars=4 stmts=2
void test_func(void) {
    int a40 = -48;
    int sum32 = 3;
    int hi13 = -34;
    float lo44 = 61.64;
    int *ptr = &a40;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 39;
    int sv1 = 0;
    int i;
    for (i = 0; i < 99; i++) {
        switch (lo44) {
            case 0: a40 = 5; break;
            case 1: lo44 = -49; break;
            case 2: lo44 = 59384; break;
            case 3: hi13 = -36; break;
            default: break;
        }
        lo44 = lo44 + 1;
    }
}
int main() { test_func(); return 0; }

