int test_func(void) {
    int v0 = 95;
    int v1 = 89;
    int v2 = 13;
    int v3 = 87;
    int v4 = 45;
    int i;
    v3 = 45;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v4;
    }
    v3 = v3 - v2;
    return v0;
}
int main(void) { return test_func(); }
