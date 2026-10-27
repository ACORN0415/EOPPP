int test_func(void) {
    int v0 = 85;
    int v1 = 13;
    int v2 = 88;
    int v3 = 66;
    int v4 = 97;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v4;
    }
    v2 = v2 - v4;
    return v0;
}
int main(void) { return test_func(); }
