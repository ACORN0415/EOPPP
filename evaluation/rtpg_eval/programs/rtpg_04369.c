int test_func(void) {
    int v0 = 44;
    int v1 = 17;
    int v2 = 40;
    int v3 = 81;
    int v4 = 65;
    int v5 = 83;
    int i;
    v2 = 86;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
