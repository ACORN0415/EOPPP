int test_func(void) {
    int v0 = 44;
    int v1 = 56;
    int v2 = 17;
    int v3 = 78;
    int v4 = 80;
    int i;
    v3 = v3 - v1;
    v4 = 87;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
