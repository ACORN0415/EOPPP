int test_func(void) {
    int v0 = 66;
    int v1 = 44;
    int v2 = 65;
    int v3 = 91;
    int v4 = 54;
    int v5 = 43;
    int i;
    v0 = 15;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v3;
    }
    v2 = v2 + v3;
    return v0;
}
int main(void) { return test_func(); }
