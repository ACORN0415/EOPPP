int test_func(void) {
    int v0 = 84;
    int v1 = 97;
    int v2 = 68;
    int v3 = 63;
    int v4 = 1;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 - v0;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
