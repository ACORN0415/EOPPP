int test_func(void) {
    int v0 = 51;
    int v1 = 12;
    int v2 = 17;
    int i;
    v1 = v1 - v2;
    v2 = v2 * 4;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
