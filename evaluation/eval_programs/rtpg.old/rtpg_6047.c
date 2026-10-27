// RTPG_6047: vars=6 stmts=11
enum State { GREEN, FAST, RED };
void test_func(void) {
    int dat76 = -23;
    float x81 = 22.52;
    int c32 = 2;
    float tmp13 = 22.34;
    int dat60 = 8;
    int z94 = 8;
    enum State st = GREEN;
    int h0 = 2;
    int sv0 = 0;
    int h1 = -49;
    int sv1 = 0;
    int i;
    for (i = 0; i < 49; i++) {
        x81 = x81 * 46;
        dat60 = dat60 - 5;
        dat60 = x81 * 4;
        z94 = c32;
        dat76 = dat60 * 2;
        tmp13 = tmp13 + 554;
        z94 = z94 - 3;
        tmp13 = z94;
        z94 = x81 * 9;
        dat60 = dat60 - 34609;
        dat76 = c32 + dat76;
    }
}
int main() { test_func(); return 0; }

