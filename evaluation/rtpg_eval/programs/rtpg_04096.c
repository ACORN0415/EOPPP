int test_func(void) {
    int v0 = 24;
    int v1 = 86;
    int v2 = 65;
    int v3 = 56;
    int v4 = 44;
    int v5 = 9;
    int i;
    if (v5 > v3) { v5 = v3; }
    v0 = v0 - v1;
    v1 = 55;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
