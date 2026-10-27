int test_func(void) {
    int v0 = 17;
    int v1 = 8;
    int v2 = 37;
    int v3 = 93;
    int v4 = 8;
    int i;
    v0 = v0 - v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
