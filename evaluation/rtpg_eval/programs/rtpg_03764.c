int test_func(void) {
    int v0 = 2;
    int v1 = 0;
    int v2 = 97;
    int v3 = 19;
    int v4 = 12;
    int i;
    v4 = v4 - v3;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
