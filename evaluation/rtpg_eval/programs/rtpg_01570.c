int test_func(void) {
    int v0 = 26;
    int v1 = 32;
    int v2 = 20;
    int v3 = 4;
    int v4 = 50;
    int v5 = 9;
    int i;
    v3 = 57;
    v4 = v4 - v5;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
