int test_func(void) {
    int v0 = 98;
    int v1 = 34;
    int v2 = 56;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v1;
    }
    v0 = 25;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
