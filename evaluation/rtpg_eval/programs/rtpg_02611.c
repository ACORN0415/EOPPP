int test_func(void) {
    int v0 = 57;
    int v1 = 90;
    int v2 = 51;
    int v3 = 63;
    int v4 = 25;
    int v5 = 65;
    int i;
    v1 = v1 + v3;
    v4 = v4 - v2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
