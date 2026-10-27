int test_func(void) {
    int v0 = 67;
    int v1 = 97;
    int v2 = 55;
    int v3 = 30;
    int v4 = 98;
    int v5 = 82;
    int v6 = 68;
    int v7 = 84;
    int i;
    for (i = 0; i < 14; i++) {
        v7 = v7 + v3;
    }
    if (v3 > v7) { v3 = v7; }
    return v0;
}
int main(void) { return test_func(); }
