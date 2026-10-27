int test_func(void) {
    int v0 = 68;
    int v1 = 79;
    int v2 = 93;
    int v3 = 69;
    int v4 = 47;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
