int test_func(void) {
    int v0 = 97;
    int v1 = 87;
    int v2 = 78;
    int v3 = 80;
    int i;
    v3 = v3 + v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
