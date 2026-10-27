int test_func(void) {
    int v0 = 43;
    int v1 = 97;
    int v2 = 13;
    int v3 = 70;
    int v4 = 34;
    int i;
    v4 = 15;
    v4 = v4 - v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
