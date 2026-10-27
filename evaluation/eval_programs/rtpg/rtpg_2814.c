// RTPG_2814: vars=3 stmts=7
int idx_arr[16];
void test_func(void) {
    int z71 = 64;
    int a41 = 4;
    int v25 = 10;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 73; i++) {
        switch (z71) {
            case 0: z71 = -24; break;
            case 1: z71 = 89; break;
            case 2: v25 = 50771; break;
            default: break;
        }
        z71 = z71 + 1;
    }
}
int main() { test_func(); return 0; }

