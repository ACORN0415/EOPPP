int test_func(void) {
    int v0 = 51;
    int v1 = 11;
    int v2 = 60;
    int v3 = 6;
    int v4 = 55;
    int i;
    v2 = v2 - v4;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
