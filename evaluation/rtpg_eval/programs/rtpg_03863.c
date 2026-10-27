int test_func(void) {
    int v0 = 89;
    int v1 = 51;
    int v2 = 61;
    int v3 = 14;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
