int test_func(void) {
    int v0 = 65;
    int v1 = 52;
    int v2 = 76;
    int v3 = 62;
    int v4 = 12;
    int v5 = 44;
    int v6 = 20;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 7; i++) {
        v3 = v3 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
