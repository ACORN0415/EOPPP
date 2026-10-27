int test_func(void) {
    int v0 = 25;
    int v1 = 4;
    int v2 = 97;
    int v3 = 20;
    int v4 = 92;
    int v5 = 89;
    int i;
    v4 = 15;
    v2 = v2 * 10;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
