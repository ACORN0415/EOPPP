int test_func(void) {
    int v0 = 40;
    int v1 = 97;
    int v2 = 65;
    int v3 = 57;
    int v4 = 19;
    int v5 = 23;
    int v6 = 11;
    int v7 = 36;
    int i;
    v1 = v1 - v0;
    v1 = v1 + v3;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
