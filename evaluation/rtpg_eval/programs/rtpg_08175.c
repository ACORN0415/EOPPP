int test_func(void) {
    int v0 = 87;
    int v1 = 84;
    int v2 = 71;
    int v3 = 5;
    int v4 = 76;
    int v5 = 78;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v1;
    }
    if (v1 > v1) { v1 = v1; }
    return v0;
}
int main(void) { return test_func(); }
