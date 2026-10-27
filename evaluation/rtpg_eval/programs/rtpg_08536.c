int test_func(void) {
    int v0 = 68;
    int v1 = 85;
    int v2 = 27;
    int v3 = 40;
    int v4 = 74;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v3;
    }
    if (v2 > v2) { v2 = v2; }
    v0 = 46;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
