int test_func(void) {
    int v0 = 8;
    int v1 = 45;
    int v2 = 40;
    int v3 = 65;
    int i;
    v1 = 17;
    v0 = v0 - v1;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
