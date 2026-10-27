int test_func(void) {
    int v0 = 57;
    int v1 = 25;
    int v2 = 87;
    int v3 = 70;
    int v4 = 83;
    int v5 = 30;
    int v6 = 5;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v0;
    }
    if (v2 > v1) { v2 = v1; }
    v1 = v1 - v3;
    return v0;
}
int main(void) { return test_func(); }
