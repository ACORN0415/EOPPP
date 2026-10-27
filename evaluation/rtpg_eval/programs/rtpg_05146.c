int test_func(void) {
    int v0 = 78;
    int v1 = 60;
    int v2 = 79;
    int v3 = 24;
    int v4 = 36;
    int v5 = 97;
    int v6 = 97;
    int i;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v5;
    }
    if (v6 > v1) { v6 = v1; }
    v6 = 44;
    v4 = v4 * 7;
    return v0;
}
int main(void) { return test_func(); }
