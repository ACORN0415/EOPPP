int test_func(void) {
    int v0 = 8;
    int v1 = 17;
    int v2 = 53;
    int v3 = 65;
    int i;
    v1 = 63;
    v3 = v3 - v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
