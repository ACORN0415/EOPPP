int test_func(void) {
    int v0 = 55;
    int v1 = 53;
    int v2 = 97;
    int v3 = 7;
    int v4 = 66;
    int v5 = 4;
    int v6 = 37;
    int v7 = 40;
    int i;
    for (i = 0; i < 7; i++) {
        v5 = v5 + v2;
    }
    if (v4 > v0) { v4 = v0; }
    return v0;
}
int main(void) { return test_func(); }
