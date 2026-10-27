int test_func(void) {
    int v0 = 97;
    int v1 = 14;
    int v2 = 29;
    int v3 = 14;
    int v4 = 18;
    int v5 = 97;
    int v6 = 21;
    int i;
    v6 = v6 + v3;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v6;
    }
    v1 = 65;
    return v0;
}
int main(void) { return test_func(); }
