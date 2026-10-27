int test_func(void) {
    int v0 = 21;
    int v1 = 93;
    int v2 = 89;
    int v3 = 49;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v0;
    }
    v1 = 87;
    return v0;
}
int main(void) { return test_func(); }
