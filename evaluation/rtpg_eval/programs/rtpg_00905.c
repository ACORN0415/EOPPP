int test_func(void) {
    int v0 = 80;
    int v1 = 51;
    int v2 = 92;
    int v3 = 96;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
