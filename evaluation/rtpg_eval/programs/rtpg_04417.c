int test_func(void) {
    int v0 = 98;
    int v1 = 96;
    int v2 = 89;
    int v3 = 60;
    int v4 = 67;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v3;
    }
    if (v2 > v0) { v2 = v0; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
