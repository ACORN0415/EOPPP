// RTPG_9739: vars=4 stmts=11
void test_func(void) {
    int x98 = 38262;
    int z17 = 47;
    int a32 = 58864;
    int acc73 = -1;
    int i;
    for (i = 0; i < 95; i++) {
        switch (x98) {
            case 0: x98 = 15851; break;
            case 1: z17 = 3; break;
            case 2: a32 = 4; break;
            default: break;
        }
        x98 = x98 + 1;
    }
}
int main() { test_func(); return 0; }

