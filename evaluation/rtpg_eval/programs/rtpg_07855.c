int test_func(void) {
    int v0 = 41;
    int v1 = 44;
    int v2 = 18;
    int v3 = 38;
    int v4 = 70;
    int v5 = 11;
    int i;
    for (i = 0; i < 7; i++) {
        v5 = v5 + v4;
    }
    if (v1 > v2) { v1 = v2; }
    return v0;
}
int main(void) { return test_func(); }
