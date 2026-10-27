int test_func(void) {
    int v0 = 94;
    int v1 = 97;
    int v2 = 48;
    int v3 = 44;
    int v4 = 90;
    int v5 = 7;
    int v6 = 32;
    int i;
    v4 = v4 * 3;
    v1 = v1 % (v6 + 1);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
