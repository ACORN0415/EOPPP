int test_func(void) {
    int v0 = 67;
    int v1 = 72;
    int v2 = 65;
    int v3 = 47;
    int v4 = 71;
    int v5 = 2;
    int v6 = 4;
    int v7 = 57;
    int i;
    if (v1 > v7) { v1 = v7; }
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
