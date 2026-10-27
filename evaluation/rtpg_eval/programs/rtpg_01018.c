int test_func(void) {
    int v0 = 65;
    int v1 = 29;
    int v2 = 91;
    int v3 = 51;
    int v4 = 13;
    int v5 = 57;
    int v6 = 15;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 11; i++) {
        v4 = v4 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }
